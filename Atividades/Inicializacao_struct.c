// struct Exemplo {
//     int numero;
//     char caractere;
// };

// int main() {
//     // Inicialização direta durante a declaração
//     struct Exemplo objeto1 = {10, 'A'};

//     // Inicialização direta em qualquer ponto do código
//     struct Exemplo objeto2;
//     objeto2.numero = 20;
//     objeto2.caractere = 'B';

//     return 0;
// }

//OUTRO EXEMPLO
struct Exemplo {
    int numero;
    char caractere;
};

// Função de inicialização
struct Exemplo inicializarExemplo(int num, char ch) {
    struct Exemplo novoObjeto;
    novoObjeto.numero = num;
    novoObjeto.caractere = ch;
    return novoObjeto;
}

int main() {
    // Chamando a função de inicialização
    struct Exemplo objeto3 = inicializarExemplo(30, 'C');
    
    return 0;
    
}
