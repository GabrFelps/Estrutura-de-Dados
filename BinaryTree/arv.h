#ifndef ARV_H
#define ARV_H

#include <stdio.h>
#include <stdlib.h>

#define fmt "%d "
typedef int Item;

typedef struct arv {
    struct arv *esq;
    Item item;
    struct arv *dir;
} *Arv;

Arv arv(Arv e, Item x, Arv d);
void emordem(Arv A);
void preordem(Arv A);
void posordem(Arv A);
void destroi(Arv *A);
void ins(Item x, Arv *A);
int busca(Item x, Arv A);
Item retmax(Arv *A);
void rem(Item x, Arv *A);
int nos(Arv A);
int folhas(Arv A);

#endif
