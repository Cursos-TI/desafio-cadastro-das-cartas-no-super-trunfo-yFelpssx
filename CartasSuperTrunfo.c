#include <stdio.h>
#include <string.h>


void imprimir_valor_formatado(double valor) {
    if (valor >= 1e12) {
        printf("%.2f trilhões", valor / 1e12);
    } else if (valor >= 1e9) {
        printf("%.2f bilhões", valor / 1e9);
    } else if (valor >= 1e6) {
        printf("%.2f milhões", valor / 1e6);
    } else if (valor >= 1e3) {
        printf("%.2f mil", valor / 1e3);
    } else {
        printf("%.2f", valor);
    }
}

int main() {
    char nome[100];
    char área[100];
    int turísticos;
    float população_valor;
    char população_nome[30];
    float pib_valor;
    char pib_unidade[30];

    printf("Digite o nome da cidade: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';



    printf("Digite a área de tamanho da cidade em km²:");
    fgets(área, sizeof(área), stdin);
    área[ strcspn(área, "\n")] = '\0';



    printf("Digite o PIB (ex: 100 Bilhões): ");
    scanf("%f %29[^\n]", &pib_valor, pib_unidade);
    getchar();

    if (strstr(pib_unidade, "Bilhões") || strstr(pib_unidade, "bilhões")) {
        pib_valor *= 1e9;
    } else if (strstr(pib_unidade, "Milhões") || strstr(pib_unidade, "milhões")) {
        pib_valor *= 1e6;
    } else if (strstr(pib_unidade, "Trilhão") || strstr(pib_unidade, "trilhão") || 
               strstr(pib_unidade, "Trilhões") || strstr(pib_unidade, "trilhões")) {
        pib_valor *= 1e12;
    }



    printf("Digite quantos pontos turísticos contém:");
    scanf("%d", &turísticos);
    getchar();




    printf("Digite a população (ex: 19 Milhões):");
    scanf("%f %29[^\n]", &população_valor, população_nome);
    getchar();

    if (strstr(população_nome, "Milhão") || strstr(população_nome, "milhão") || 
        strstr(população_nome, "Milhões") || strstr(população_nome, "milhões")) {
        população_valor *= 1e6;    
    } else if (strstr(população_nome, "Mil") || strstr(população_nome, "mil")) {
        população_valor *= 1e3;
    }



    printf("-----------------------------------------------------------------------------------------\n");

    printf("O nome da cidade cadastrada é: %s \n", nome);
    printf("O tamanho desta cidade é de: %s km² \n", área);
    printf("O valor do PIB é de: R$");
    imprimir_valor_formatado(pib_valor);
    printf("\n");
    printf("A cidade contém %d pontos turísticos. \n", turísticos);
    printf("%s contém ", nome);
    imprimir_valor_formatado(população_valor);
    printf(" pessoas\n");

    return 0;
}
