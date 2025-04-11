#include "arv.h"
#include "ctype.h"


int valor(Arv arv){
    if (arv == NULL) return 0;

    if(isdigit(arv->item)) return arv->item - '0';
    else{
        int val_esq = valor(arv->esq);
        int val_dir = valor(arv->dir);
        switch (arv->item){
            case '+': return val_esq + val_dir;
            case '-': return val_esq - val_dir;
            case '*': return val_esq * val_dir;
            case '/': return val_esq / val_dir;
        }
    }
}