#include <stdio.h>

// Definição de uma estrutura (equivalente a um registro)
struct Registro {
    int campo1;
    int campo2;
};

int main() {
    // Declaração de variáveis de estrutura (registro)
    struct Registro registro1 = {10, 20};
    struct Registro registro2;

    // Atribuição direta entre variáveis de estrutura
    registro2 = registro1;

    // Exibindo os valores após a atribuição
    printf("Valores de registro2 após atribuição:\n");
    printf("campo1: %d\n", registro2.campo1);
    printf("campo2: %d\n", registro2.campo2);

    // Declaração e inicialização de um vetor
    int Vetor1[] = {1, 2, 3, 4, 5};
    int Vetor2[5]; // Vetor vazio

    // Tentativa de atribuição direta entre vetores (o que não funciona)
    // Vetor2 = Vetor1; // Isso resultaria em um erro no C

    return 0;
}
