#include "arv.h"

int igual(Arv arvA, Arv arvB) {
    if (arvA == NULL && arvB == NULL) return 1;
    if (arvA == NULL || arvB == NULL) return 0;
    
    return (arvA->item == arvB->item) &&
        igual(arvA->esq, arvB->esq) &&
        igual(arvA->dir, arvB->dir);
}