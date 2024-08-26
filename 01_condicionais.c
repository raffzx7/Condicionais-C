#include <stdio.h>
#include <string.h>
#define NUM_ALUNOS 5

struct Aluno {
    char nome[50];
    float notas[4];
};

int main() {
    struct Aluno alunos[NUM_ALUNOS];

    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("informe o nome do aluno %d: ", i + 1);
        scanf("%s", alunos[i].nome);

        for (int j = 0; j < 4; j++) {
            printf("informe a nota %d para o aluno %s: ", j + 1, alunos[i].nome);
            scanf("%f", &alunos[i].notas[j]);

        
            if (alunos[i].notas[j] < 0 || alunos[i].notas[j] > 10) {
                printf("informe uma nota entre 0 e 10.\n");
                j--; // Decrementa o índice para repetir a leitura da nota inválida
            }
        }
    }
 
    printf("aluno cadastrados:\n");
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("Aluno %d: %s\n", i + 1, alunos[i].nome);
    }

    return 0;
}
