#include "arv.h"

void exibe_dec(Arv arv){
    if (arv != NULL){
        exibe_dec(arv->dir);
        printf(fmt, arv->item);
        exibe_dec(arv->esq);
    }
}