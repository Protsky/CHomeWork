#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct listrec {
   int value;
   struct listrec *next;
}listrec;

listrec *createNode()
{
   listrec *newNode = (listrec *)malloc(sizeof(listrec));
   newNode->next = NULL;
   newNode->value = 0;
   return newNode;
}

void addElement(listrec *lista,int value, listrec *pNew){

    listrec *pNext = createNode();

    while(lista->next != NULL){
        lista = lista->next;
    }
    lista->next = pNext;
    pNew = pNext;
    pNext->value = value;
}

void printList(listrec *lista){
    while(lista->next != NULL){
        printf("%d ",lista->value);
        lista = lista->next;
    }
    printf("%d",lista->value);
}

void deleteLastNode(listrec *lista){
    while(lista->next->next != NULL){
        lista = lista->next;
    } 

    free(lista->next);
    lista->next = NULL;
}

listrec *cerca(listrec *lista, int value){

    while(lista->next != NULL){
        if(lista->value == value){
            return lista;
        }
        lista = lista->next;
    } 

    if(lista->value == value){
        return lista;
    }
    else{
        return NULL;
    }
   

}

int main(int argc, char *argv[]){
    
    listrec *p1;
    listrec *p2;
    listrec *p3;

    p1 = (listrec *)malloc(sizeof(listrec));
    p2 = (listrec *)malloc(sizeof(listrec)); 

    p1->value = 5;
    p2->value = 4;
    p1->next = p2;
    p2->next = NULL;

    addElement(p1,2,p3);
    deleteLastNode(p1);
    printList(p1);
    listrec *item = cerca(p1,4);
    printf("\n");
    printf("Item %d found at the adress %p",item->value,item);
    

    return 0;
}
