#include <stdio.h>
 
    int main(){

    printf("-----SUPER TRUNFO PAISES-----\n");

//VARIÁVEIS DA PRIMEIRA CIDADE.
    int população1;
    float PIB1;
    char nome1[100];
    int pontos1;
    
//VARIÁVEIS DA SEGUNDA CIDADE.
    int população2;
    float PIB2;
    char nome2[100];
    int pontos2;

//CADASTRO DA PRIMEIRA CARTA.
    printf("Nome da cidade: ");
    scanf("%s", nome1);

    printf("O PIB total: ");
    scanf("%f", &PIB1);
    
    printf("População desta cidade: ");
    scanf("%i", &população1);

    printf("Digite quantos pontos turísticos contém: ");
    scanf("%d", &pontos1);

//APENAS PARA SEPARAR AS CARTAS.
    printf("\n");


//CADASTRO DA SEGUNDA CARTA.
    printf("Nome da segunda cidade: ");
    scanf("%s", nome2);

    printf("O PIB total: ");
    scanf("%f", &PIB2);
    
    printf("População desta cidade: ");
    scanf("%i", &população2);

    printf("Digite quantos pontos turísticos contém: ");
    scanf("%d", &pontos2);


//APENAS PARA SEPARAR NO TERMINAL.
    printf("\n");

//TERMINAL.
    printf("Carta 1:\n");
    printf("o nome da primeira cidade é: %s\n", nome1);
    printf("O PIB total de %s é R$%.2f\n", nome1, PIB1);
    printf("A população do %s é de %i pessoas\n", nome1, população1);
    printf("%s contém %d pontos turísticos\n", nome1, pontos1);

//APENAS PARA SEPARAR AS CARTAS.
    printf("\n");

    printf("Carta 2:\n");
    printf("o nome da segunda cidade é: %s\n", nome2);
    printf("O PIB total de %s é R$%.2f\n", nome2, PIB2);
    printf("A população do %s é de %i pessoas\n", nome2, população2);
    printf("%s contém %d pontos turísticos\n", nome2, pontos2);






return 0;

}