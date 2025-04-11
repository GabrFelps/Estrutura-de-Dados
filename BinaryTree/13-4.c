#include "arv.h"

int altura(Arv A) {
  if (A == NULL) return -1; // Altura da árvore vazia é -1
  int alt_esq = altura(A->esq);
  int alt_dir = altura(A->dir);
  return 1 + (alt_esq > alt_dir ? alt_esq : alt_dir);
}
