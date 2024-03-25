#include <stdio.h>
#include <stdlib.h>

typedef struct departamento {
    int cod;
    char descricao[30];
} Departamento;

typedef struct cargo {
    int cod;
    char descricao[30];
} Cargo;

typedef struct funcionario {
    int cod;
    char nome[30];
    float salario;
    Departamento depto;
    Cargo cargo;
} Funcionario;

int main(void) {
    // Vetor de funcionarios
    Funcionario nome_vetor_struct[10]; // Supondo que seja um vetor de 10 elementos
    
    // Acessando um elemento do vetor e imprimindo seu nome
    printf("\nTEXTO %s ", nome_vetor_struct[0].nome); //vai imprimir um símbolo estranho pq ñ tem nada no vetor
    
    return 0;
}
