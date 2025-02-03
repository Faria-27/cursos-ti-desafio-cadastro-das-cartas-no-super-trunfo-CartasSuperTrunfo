#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char letra; //variaveis listadas para cada tipo de informação da carta
    int numero;
    char nome[10];
    int populacao;
    int area;
    int pturisticos;
    int pib;
    char letra2; 
    int numero2;
    char nome2[10];
    int populacao2;
    int area2;
    int pturisticos2;
    int pib2;
    int superpoder = (populacao / area) + pturisticos + pib;
    int superpoder2 = (populacao2 / area2) + pturisticos2 + pib2;
    

    // Cadastro das Cartas:
    
    printf("Digite a letra da carta: \n");
    scanf("%c", &letra);

    printf("Digite o número da carta: \n");
    scanf("%d", &numero);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome);

    printf("Digite a quantidade populacional: \n");
    scanf("%d", &populacao);
    
    printf("Digite a Área da cidade: \n");
    scanf("%d", &area);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pturisticos);

    printf("Digite o PIB da cidade: \n");
    scanf("%d", &pib);

    printf("Digite a letra da carta 2: \n");
    scanf("%s", &letra2);

    printf("Digite o número da carta 2: \n");
    scanf("%d", &numero2);

    printf("Digite o nome da cidade 2: \n");
    scanf("%s", &nome2);

    printf("Digite a quantidade populacional 2: \n");
    scanf("%d", &populacao2);
    
    printf("Digite a Área da cidade 2: \n");
    scanf("%d", &area2);

    printf("Digite a quantidade de pontos turisticos 2: \n");
    scanf("%d", &pturisticos2);

    printf("Digite o PIB da cidade 2: \n");
    scanf("%d", &pib2);

    // Exibição dos Dados das Cartas:
    printf("\nCódigo: %c%d\n", letra, numero);
    printf("Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área da cidade: %d km²\n", area);
    printf("Quantidade de pontos turisticos: %d\n", pturisticos);
    printf("Densidade populacional: %d\n", populacao / area;
    printf("Produto interno bruto: %d\n", pib);
    printf("PIB per capita: %d\n", pib / populacao);
    printf("\nCódigo: %c%d\n", letra2, numero2);
    printf("Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área da cidade: %d km²\n", area2);
    printf("Quantidade de pontos turisticos: %d\n", pturisticos2);
    printf("Densidade populacional: %d\n", populacao2 / area2;
    printf("Produto interno bruto: %d\n", pib2);
    printf("PIB per capita: %d\n", pib2 / populacao2);

    //Comparação para ganhador
    if(populacao > populacao2){
        printf("\n%s tem a maior população!\n", nome);
    }else{
        printf("%s tem a maior população!\n", nome2);
    }
    if (area > area2){
        printf("%s tem a maior área!\n", nome);
    }else{
        printf("%s tem a maior área!\n", nome2);
    }
    if(pturisticos >pturisticos2){
        printf("%s tem a mais pontos turisticos!\n", nome);
    }else{
        printf("%s tem a mais pontos turisticos!\n", nome2);
    }
    if(pib > pib2){
        printf("%s tem a maior PIB!\n", nome);
    }else{
        printf("%s tem a maior PIB!\n", nome2);
    }
    if (superpoder > superpoder2)
    {
        printf("\n%s tem a maior média de pontos!\n", nome);
    }else;
    {
        printf("\n%s tem a maior média de pontos!\n", nome2);
    }
    
    return 0;
}