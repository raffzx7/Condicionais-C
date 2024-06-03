#include <stdio.h>
#define NUM_ALUNOS 5
#define NUM_NOTAS 4

struct Aluno {
    char nome[50];
    float notas[NUM_NOTAS];
};

int main() {
    struct Aluno alunos[NUM_ALUNOS];

    printf("=== Atribuição de Notas ===\n");

    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("\nAluno %d:\n", i + 1);

        printf("informe o nome do aluno: ");
        scanf("%s", alunos[i].nome);

        for (int j = 0; j < NUM_NOTAS; j++) {
      
            printf("informe a nota %d (entre 0 e 10): ", j + 1);
            scanf("%f", &alunos[i].notas[j]);

            if (alunos[i].notas[j] < 0 || alunos[i].notas[j] > 10) {
                printf("Nota inválida! Por favor, digite uma nota entre 0 e 10.\n");
                j--; // Repete a iteração para que o usuário insira a nota corretamente
            }
        }
    }

    printf("atribuídas com sucesso!\n");

    return 0;
}
