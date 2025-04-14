#include <stdio.h>

int main(){

     //****INFORMAÇÕES DA CARTA 01***//;

    char estado_01[50]={'a','b','c','d','e','f','g','h'} ,estado_02[50]={'a','b','c','d','e','f','g','h'};
    char codigo_carta_01[04],codigo_carta_02[04];
    char nome_da_cidade_01[50],nome_da_cidade_02[50];
    int populacao_01,populacao_02;
    float area_01,area_02;
    float pib_01,pib_02;
    int pontos_turisticos_01,pontos_turisticos_02;

    //ESTRADAS E SAÍDAS;

    //Intruções;

    printf("---------------------DESAFIO SUPER TRUNFO---------------------------\n");

    printf("O jogador deve fornecer os dados de cadastro das cartas,\n");

    printf("as cidades sao descritas na ordem abaixo:\n");

    printf("Um letra de 'A' a 'H' (representando um dos oitos Estados).\n");

    printf("O Código da carta, deve ser inseridas de: 01 a 04.\n");

    printf("O nome da cidade segundo o estado representado.\n");

    printf("O Número de habitantes da cidade.");

    printf("A área quadrada(KM²) da cidade, insira apenas o valor com o ponto.\n");

    printf("O PIB(Produto Interno Bruto), insira apenas o valor com o ponto.\n");

    printf("O Número de ponto turísticos.\n");

    printf("-----------------------------------------------------------------\n");

    printf("\n");


    //Criacao da CARTA_01//;

    printf("CARTA_01 \n");

    printf("Insira o estado_01:\n");
    scanf(" %c",&estado_01);
    
    printf("Insira o codigo_carta_01:\n");
    scanf("%d", &codigo_carta_01);

    printf("Insira o nome_da_cidade_01:\n");
    getchar(); // Limpa o buffer antes de ler a cidade;
    scanf("%49[^\n]",nome_da_cidade_01);
    
    printf("Insira a populacao_01:\n");
    scanf("%d", &populacao_01);
    
    printf("Insira a area_01:\n");
    scanf("%f",&area_01);
    
    printf("Insira o PIB_01:\n");
    scanf("%f",&pib_01);
    
    printf("Insira o numero de pontos_turisticos_01:\n");
    scanf("%d",&pontos_turisticos_01);
    

    //Criacao da CARTA_02//;

    printf("CARTA_02 \n");

    printf("Insira o estado_02:\n");
    scanf(" %c",&estado_02);

    printf("Insira o codigo_carta_02:\n");
    scanf("%d", &codigo_carta_02);   

    printf("Insira o nome_da_cidade_02:\n");
    scanf("%49[^\n]", nome_da_cidade_02);
    
    printf("Insira a populacao_02:\n");
    scanf("%d",&populacao_02);
    
    printf("Insira a area_02:\n");
    scanf("%f",&area_02);
    
    printf("Insira o PIB_02:\n");
    scanf("%f",&pib_02);
    
    printf("Insira o numero de pontos_turisticos_02:\n");
    scanf("%d",&pontos_turisticos_02);

    printf("\n");
    
    //Impressão de Dados da Carta 01

printf("Estado: %c\n",estado_01);
printf("Codigo:%d\n",codigo_carta_01);
printf("Cidade:%s",nome_da_cidade_01);
printf("Populacao:%dMIL\n",populacao_01);
printf("Area:%.2fkm²\n,area_01");
printf("Pib:%.2fbilhoes_de_reais\n",pib_01);
printf("Pontos_turisticos_01:%d\n",pontos_turisticos_01);

 printf("\n");

//Impressão de Dados da Carta 02

printf("Estado: %c\n",estado_02);
printf("Codigo: %d\n",codigo_carta_02);
printf("Cidade: %s\n", nome_da_cidade_02);
printf("Populacao: %dMIL\n" ,populacao_02);
printf("Area:%.2f km²\n",area_02);
printf("Pib:%.2f bilhoes_de_reais\n",pib_02);
printf("Pontos_turisticos_01:%d\n",pontos_turisticos_02);

    
return 0;


}
