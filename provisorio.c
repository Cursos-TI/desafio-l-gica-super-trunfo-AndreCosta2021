#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    // Jogo de Super Trunfo
    // Combate das Cidades
    // Programador: André Costa
    // Aluno Matrícula 202503001421
    // Universidade Estácio de Sá
    // Curso de ADS - EAD

    // Criação das variáveis
    unsigned int PopCid01, PopCid02, PTCid01, PTCid02;
    float AreaCid01, AreaCid02, PIBCid01, PIBCid02, PPCCid01, PPCCid02, DPCid01, DPCid02;
    char EstCid01, EstCid02, CodCid01[2], CodCid02[2], NomeCid01[20], NomeCid02[20], NomeEstadoCid01[20], NomeEstadoCid02[20];

    // Abertura do Programa
    printf(" *** Bem vindo ao SUPER TRUNFO das cidades *** \n");
    printf("Diversão garantida para toda a família!\n");
    printf("Pronto para iniciarmos o combate? Ótimo, então vamos cadastrar as 2 primeiras cartas!\n\n");

    //Cadastramento das 2 primeiras cartas do jogo
    // Carta 01 - Estado
    printf("Escolha um dos estados disponíveis:\n");
    printf("A - Para São Paulo!, ou\n");
    printf("B - Rio Grande do Sul!, ou\n");
    printf("C - Para Minas Gerais!, ou\n");
    printf("D - Para Goiás!, ou\n");
    printf("E - Para Mato Grosso!, ou\n");
    printf("F - Para Bahia!, ou\n");
    printf("G - Para Ceará!, ou\n");
    printf("H - Para Amazonas!");
    scanf("%c", EstCid01);

    // Carta 01 - Código
    printf("Informe o código da Carta, e este valor deve estar entre 01 e 04:\n");
    scanf("%s",CodCid01);

    // Carta 01 - Cidade
    printf("Informe o nome da cidade:\n");
    scanf("%s", NomeCid01);

    // Carta 01 - População
    printf("Informe a população da cidade de %s: \n", NomeCid01);
    scanf("%u",PopCid01);

    // Carta 01 - Área
    printf("Informe a área da cidade de %s, em km²: \n", NomeCid01);
    scanf("%f",AreaCid01);

    // Carta 01 - PIB
    printf("Informe o PIB em bilhões de R$ da cidade de %s: \n", NomeCid01);
    scanf("%f",PIBCid01);

    // Carta 01 - Quantidade de Pontos Turísticos
    printf("Informe a quantidade de pontos turísticos da cidade de %s: \n", NomeCid01);
    scanf("%u",PTCid01);

    // Carta 01 - Cálculo do PIB Per Capita
    PPCCid01 = (PIBCid01*1000000000) / PopCid01;

    // Carta 01 - Densidade Populacional
    DPCid01 = PopCid01 / AreaCid01;

    // Confirmação dos Valores
    printf("Código da Carta: %c%s\n", EstCid01, CodCid01);
    
    return 0;
}
