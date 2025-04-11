#include <stdio.h>
#include "arv.h"

int main() {
    Arv A = NULL;

    // Inserindo nós na arvore
    ins(10, &A);
    ins(5, &A);
    ins(15, &A);
    ins(3, &A);
    ins(7, &A);
    ins(12, &A);
    ins(18, &A);

    printf("Em ordem: ");
    emordem(A);
    printf("\n");

    // Questão 13.4 - Altura da arvore
    printf("Altura da arvore: %d\n", altura(A));

    // Questão 13.5 - Verifica se tem um item
    int x = 7;
    printf("Tem %d na arvore? %s\n", x, tem(x, A) ? "Sim" : "Nao");

    x = 20;
    printf("Tem %d na arvore? %s\n", x, tem(x, A) ? "Sim" : "Nao");

    // Questão 13.6 - Verifica se é estritamente binária
    printf("Arvore estritamente binaria? %s\n", eb(A) ? "Sim" : "Nao");

    // Liberando memória
    destroi(&A);

    return 0;
}
