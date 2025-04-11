#include "arv.h"

int main() {
    Arv A = NULL;
    ins(10, &A);
    ins(5, &A);
    ins(15, &A);
    ins(2, &A);
    ins(7, &A);

    printf("Em ordem: ");
    emordem(A);
    printf("\n");

    printf("Total de nós: %d\n", nos(A));
    printf("Total de folhas: %d\n", folhas(A));

    destroi(&A);
    return 0;
}
