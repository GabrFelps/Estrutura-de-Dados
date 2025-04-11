#include "arv.h"

int eb(Arv A) {
  if (A == NULL) return 1;
  if ((A->esq == NULL && A->dir != NULL) || (A->esq != NULL && A->dir == NULL))
      return 0;
  return eb(A->esq) && eb(A->dir);
}
