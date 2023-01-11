#include <stdlib.h>

#include <stdio.h>

#include <string.h>

#include <limits.h>

typedef struct Impiegati {
  int id;
  char nome[20];
  char cognome[20];
  char indirizzo[20];
  double stipendio;

}
Impiegati;

typedef struct DataEdit {
  int id;
  char nome[20];
  char cognome[20];
  double stipendio;

}
DataEdit;

void saveImpiegatiToDat(Impiegati array[], int size) {
  FILE * file;
  file = fopen("impiegati.dat", "wb");
  fwrite(array, size, 1, file);

  fclose(file);

}

void retriveAndSaveData(char path[], Impiegati * a) {

  FILE * file2 = fopen("impiegati.dat", "rb");
  if (file2 != NULL) {
    //INT_MAX not great
    fread(a, sizeof(Impiegati), INT_MAX, file2);
    fclose(file2);
  }

}

void showImpiegati(Impiegati a[], int quantity) {
  for (int i = 0; i < quantity; i++) {
    printf("%d\n", a[i].id);
    printf("%s\n", a[i].nome);
    printf("%s\n", a[i].cognome);
    printf("%s\n", a[i].indirizzo);
    printf("%f\n", a[i].stipendio);
    printf("\n");
  }
}

void editStipendio(int totalFileDat) {

  Impiegati tempList[totalFileDat];
  retriveAndSaveData("impiegati.dat", tempList);

  DataEdit list[2] = {
    //TODO JSON PARSING INTO ARRAY
    {
      0,
      "Gionata",
      "Donati",
      30
    },
    {
      1,
      "Nadia",
      "Donati",
      30
    }

  };

  for (int i = 0; i < sizeof(list) / sizeof(list[0]); i++) {
    if (!strcmp(tempList[list[i].id].nome, list[i].nome) && !strcmp(tempList[list[i].id].cognome, list[i].cognome)) {
      tempList[list[i].id].stipendio = list[i].stipendio;
    } else {
      printf("Error data not updated, probably name or surname not the same: %d, %s, %s\n ", list[i].id, list[i].nome, list[i].cognome);
    }
  }

  saveImpiegatiToDat(tempList, sizeof(tempList));

}

int main(int argc, char * argv[]) {

  Impiegati list[2] = {
    {
      0,
      "Gionata",
      "Donati",
      "Via alla Rongia",
      30
    },
    {
      1,
      "Nadia",
      "Donati",
      "Via alla Rongia",
      30
    }
  };

  //Forced to pass sizeOfList couse pointer do not contain this size
  saveImpiegatiToDat(list, sizeof(list));
  editStipendio(2);

  Impiegati tempList[2];

  retriveAndSaveData("impiegati.dat", tempList);

  showImpiegati(tempList, 2);

  return 0;
}