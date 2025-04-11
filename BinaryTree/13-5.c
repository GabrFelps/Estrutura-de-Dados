#include "arv.h"

int tem(Item x, Arv A) {
  if (A == NULL) return 0;
  if (x == A->item) return 1;
  if (x < A->item) return tem(x, A->esq);
  else return tem(x, A->dir);
}