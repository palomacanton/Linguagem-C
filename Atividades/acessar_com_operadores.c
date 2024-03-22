
// void main(){
//     struct Pessoa {
//     char nome[50];
//     int idade;
// };

// struct Pessoa pessoa1;
// pessoa1.idade = 30;   // Acesso direto ao membro "idade" usando o operador ponto
// }

void main(){
        struct Pessoa {
        char nome[50];
        int idade;
    };

    struct Pessoa pessoa1;
    struct Pessoa *ptrPessoa = &pessoa1;
    ptrPessoa->idade = 30;    // Acesso ao membro "idade" usando o operador seta com um ponteiro

}