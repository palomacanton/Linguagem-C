#include <stdio.h>
#include <stdlib.h>

struct departamento {
    int cod;
    char descricao[30];
};

struct cargo {
    int cod;
    char descricao[30];
};

struct funcionario {
    int cod;
    char nome[30];
    float salario;
    struct departamento depto; // estrutura antes construída (struct aninhada) linha 4-7
    struct cargo cargo; // estrutura antes construída (struct aninhada) linha 9-12
};

struct funcionario Funcionario;

int main(void) {
    
}
