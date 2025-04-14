#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int NumUsuario, NumAleatorio;
    int Menu;

    // Menu do jogo
    printf("1 - Acessar jogo!\n");
    printf("2 - Regras\n");
    printf("3 - Sair\n");

    // Captura da opção do usuário
    scanf("%d",&Menu);
    
    // Avaliação da opção do usuário e realização da ação respectiva para a escolha feita
    switch (Menu){
    
    // Menu de acesso ao jogo
    case 1:
        srand(time(0)); 
        NumAleatorio = rand() % 10;
        printf("Dê o seu palpite e tente acertar o número que o computador escolheu (entre 0 e 9): \n");
        scanf("%d",&NumUsuario);

            if (NumUsuario == NumAleatorio){
                printf("Parabéns, você acertou na escolha!\n");
                printf("O computador também escolheu o número %d!\n", NumAleatorio);
            } else {
                printf("Infelizmente não foi desta vez. Jogue novamente e tente acertar!\n");
                printf("O computador tinha escolhido o número %d!\n", NumAleatorio);
            }
        break;
    
    // Menu de acesso às regras do jogo
    case 2:
        printf("As regras do jogo são ...\n");
        break;

    // Menu de saída do jogo
    case 3:
        printf("VocÊ saiu do jogo de forma segura!\n");
        break;

    // Menu alternativo
    default:
        printf("Opção inválida!\n");
    }

    return 0;
}