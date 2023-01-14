int pow2plus1(int exp) {
  return (1 << exp) + 1;
}
//alternativa, con aggiunta di 1 tramite OR (va bene per exp > 1)
int pow2plus1(int exp) {
  int i = 1;
  i = i << exp;
  i |= 1;
  return i;
}
unsigned char getBitAtPos(unsigned char value, int pos) {
  return (value & (1 << pos)) >> pos;
}
unsigned char setBitAtPos(unsigned char value, int pos) {
  return (value | (1 << pos));
}
unsigned char resetBitAtPos(unsigned char value, int pos) {
  unsigned char mask = 255;
  mask = mask << 1; //introduce uno zero a destra
  for (int i = 0; i < pos; i++) {
    mask = mask << 1;
    mask = mask | 1; //rimette il bit a des a 1, lasciando il secondo a 0
  }
  //risultato: tutti i bit a 1, tranne quello alla posizione pos
  return (value & mask);
}
void print(unsigned char value) {
  for (int i = 7; i >= 0; i--) {
    printf("%c", '0' + getBitAtPos(value, i));
  }
  printf("\n");
}
//alternativa, con maschera calcolata
void print(unsigned char c) {
  for (int i = 128; i > 0; i /= 2) {
    printf("%d", (c & i) ? 1 : 0);
  }
  printf("\n");
}
unsigned char invert(unsigned char value) {
  unsigned char inverted = 0;
  for (int i = 0; i < 8; i++) {
    unsigned int readBit = getBitAtPos(value, i);
    if (readBit) {
      inverted = setBitAtPos(inverted, 7 - i);
    }
  }
  return inverted;
}
unsigned char setBits(unsigned char value, int pos, int n, unsigned char y) {
  for (int i = n - 1; i >= 0; i--) {
    unsigned char readBit = getBitAtPos(y, i);
    if (readBit) {
      value = setBitAtPos(value, pos);
    } else {
      value = resetBitAtPos(value, pos);
    }
    pos--;
  }

  return value;
}
int main(int argc, char * argv[]) {
  print(4); //00000100
  printf("Expected: 00100000, ");
  print(invert(4));

  print(7); //00000111
  printf("Expected: 11100000, ");
  print(invert(7));

  print(66); //0100010
  printf("Expected: 0100010, ");
  print(invert(66));

  print(170); //10101010
  print(175); //10101111
  printf("Expected: 10111010 ");
  print(setBits(170, 5, 3, 175));

  print(174); //10101110
  printf("Expected: 10110010 ");
  print(setBits(170, 5, 3, 174));
  return 0;
}