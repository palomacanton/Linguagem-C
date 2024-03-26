

typedef struct {
    char nome[200];
    char disciplina[100];
    float nota;
} Aluno;
Aluno aluno;

int main() { //"int main(){}" é mais indicado do que "void main(){}"
    Aluno aluno_nota[10];
    int i;
	
    for(i = 0; i < 1; i++) { //repetição das 3 perguntas x vezes
        printf("\nDigite nome do aluno: ");
        scanf("%s%*c", aluno_nota[i].nome);
        printf("Digite a disciplina do aluno: ");
        scanf("%s%*c", aluno_nota[i].disciplina);
        printf("Digite o nota do aluno: ");
        scanf("%f%*c", &aluno_nota[i].nota); //"%*c"->caractere lido será salvo e o indesejado(ex: "\n") será ignorado e não armazenará na variável(limpa buffer). "%f"->float
    }
    for(i=0; i < 1; i++) { //imprime a lista de perguntas repetidas acima
        printf(" \nO nome do aluno é: %s ", aluno_nota[i].nome);
        printf(" \nA disciplina do aluno é: %s ", aluno_nota[i].disciplina);
        printf(" \nA nota do aluno é: %.2f ", aluno_nota[i].nota);
    }
    int posicao;
    char nome[30];
    printf("\nDigite um nome para saber se consta na lista: ");
    scanf("%s%*c", nome);
    
    for(i=0; i< 10; i++) {
        if(strcmp(nome, aluno_nota[i].nome)== 0) {
            printf("\nRegistro encontrado! ");
            posicao = i;
            break;
        } else {
            posicao = -1;
            printf("\nRegistro não encontrado! ");
            break;
        }
    }
    

    return 0;
}
