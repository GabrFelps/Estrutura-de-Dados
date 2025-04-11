#include "arv.h"

int tem(Item x, Arv A) {
  if (A == NULL) return 0;
  if (x == A->item) return 1;
  if (x < A->item) return busca(x, A->esq);
  else return busca(x, A->dir);
}