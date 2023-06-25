#include <stdio.h>

int main()
{
    printf("Vamos Iniciar o Jogo? 0 - SIM | 1 - NAO\n");
    int status;
    scanf("%d", &status);

    while (status == 0)
    {

        printf("********************************************\n");
        printf("*     Bem vindo ao Jogo de Adivinhacao     *\n");
        printf("********************************************\n");
        int numeroSecreto = 23;
        int chute;
        printf("Informe seu chute: ");
        scanf("%d", &chute);
        printf("Seu chute foi:.... %d \n", chute);
        if (chute == numeroSecreto)
        {
            printf("Meus parabens voce acertou\n");
        }
        else
        {
            printf("Lamento mas voce errou\n");
        }

        printf("Vamos Jogar novamente? 0 - SIM | 1 - NAO \n");
        scanf("%d", &status);
    }
    printf("Foi bom ter voce aqui em nosso jogo! ate mais\n");
}