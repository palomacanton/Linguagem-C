#include <stdio.h>

int main() {
    int x = 5;
    int *pt_x;

    /* Ponteiro pt_x recebe o endereço de memória da variável x */
    pt_x = &x;

    printf("Valor de x: %d\n", x);       // Imprime o valor de x
    printf("Valor apontado por pt_x: %d\n", *pt_x);  // Imprime o valor apontado por pt_x
    printf("Endereço de X apontado por pt_x: %d\n", &pt_x);
    printf("Acessar o enderço pela própria variável x: %d", &x);

    return 0;
}
