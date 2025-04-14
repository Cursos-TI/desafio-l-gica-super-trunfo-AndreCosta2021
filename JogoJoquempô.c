#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    // Definição das variáveis
    int EscComp, EscJog;

    // Introdução do jogo
    printf("*** Bem Vindo ao jogo de Joquempô ***\n");
    printf("Neste jogo, iremos nos divertir com a brincadeira do Pedra, Papel e Tesoura!\n\n");

    // Menu do jogo
    printf("Escolha uma das opções abaixo apresentadas:\n");
    printf("1 - Para Pedra, ou\n");
    printf("2 - Para Papel, ou\n");
    printf("3 - Para Tesoura!\n");
    scanf("%d",&EscJog);

    // Escolha do computador
    srand(time(0));
    EscComp = rand() % 3 + 1;

    // JOGO   
    switch (EscJog){    
        // Usuário escolhendo Pedra
        case 1: 
            if (EscComp == 1){
                printf("Ambos escolheram Pedra. O Resultado foi Empate!\n");
            } else if (EscComp == 2){
                printf("Você perdeu, pois a escolha de Papel pelo computador supera a sua escolha de Pedra!\n");
            } else{
                printf("Você ganhou, pois sua escolha de Pedra supera a escolha do computador de Tesoura!\n");
            };
        break;

        // Usuário escolhendo Papel
        case 2: 
            if (EscComp == 1){
                printf("Você ganhou, pois a sua escolha de Papel supera a escolha de Pedra do computador!\n");
            } else if (EscComp == 2){
                printf("Empate, pois ambos escolheram pelo Papel!\n");
            } else{
                printf("Você perdeu, pois sua escolha de Papel foi superada pela escolha por Tesouro pelo computador!\n");
            };
        break;
        
        // Usuário escolhendo Papel
        case 3: 
            if (EscComp == 1){
                printf("Você perdeu, pois a sua escolha por Tesoura foi supera pela escolha por Pedra pelo computador!\n");
            } else if (EscComp == 2){
                printf("Você acertou em escolher tesoura, pois superou a escolha de Papel do computador!\n");
            } else{
                printf("Vocês empataram pois ambos escolheram Tesoura!\n");                };
        break;

        default:
                printf("Não foi feita uma escolha válida pelo usuário!\n");
                printf("Jogue novamente e faça uma escolha válida!\n");
        break;
    }
    
    return 0;
}