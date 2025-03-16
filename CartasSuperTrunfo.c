#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Nivel: Mestre
// Autor: Acrisio Lins de Aguiar

#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[6],codigo2[6];
    char nome_cidade1[30],nome_cidade2[30];
    unsigned int populacao1,populacao2;
    float area1,area2;
    float pib1,pib2;
    int pontos_tur1,pontos_tur2;
    float densidade1,densidade2;
    float pibcapita1,pibcapita2;
    float super1,super2;
    int resultado=0;
   
    
    // Lendo os dados da carta1

    printf("***----------------------------------------------------***\n");
    printf("***Vamos fornecer informações para cadastro da CIDADE 1***\n");
    printf("***----------------------------------------------------***\n");
    printf("\n");

    printf("Digite o nome da cidade 1 (nome sem espaços):\n");
    scanf("%s", nome_cidade1);

    printf("Digite o estado da carta 1 (letra maiúscula entre A e H):\n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta 1 (número entre 00 e 20):\n");
    scanf("%s", codigo1);

    printf("Digite a populacao da cidade 1:\n");
    scanf("%u", &populacao1);

    printf("Digite a área da cidade 1 (em km²):\n");
    scanf("%f", &area1);

    printf("Digite o pib da cidade 1 (em bilhões de reais):\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade 1:\n");
    scanf("%d", &pontos_tur1);


    // Lendo os dados da carta2
    printf("***----------------------------------------------------***\n");
    printf("***Vamos fornecer informações para cadastro da CIDADE 2***\n");
    printf("***----------------------------------------------------***\n");
    printf("\n");

    printf("Digite o nome da cidade 2 (nome sem espaços):\n");
    scanf("%s", nome_cidade2);

    printf("Digite o estado da carta 2 (letra maiúscula entre A e H):\n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta 2 (número entre 00 e 20):\n");
    scanf("%s", codigo2);

    printf("Digite a populacao da cidade 2:\n");
    scanf("%u", &populacao2);

    printf("Digite a área da cidade 2 (em km²):\n");
    scanf("%f", &area2);

    printf("Digite o pib da cidade 2 (em bilhões de reais):\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade 2:\n");
    scanf("%d", &pontos_tur2);

    // Calculando as propriedades das cidades //

    densidade1 = (float) populacao1/area1;
    pibcapita1 = (float) pib1/populacao1;
    super1 = (float) (populacao1+area1+pib1+pibcapita1+(1/densidade1)+pontos_tur1);

    densidade2 = (float) populacao2/area2;
    pibcapita2 = (float) pib2/populacao2;
    super2 = (float) (populacao2+area2+pib2+pibcapita2+(1/densidade2)+pontos_tur2);

   // Imprimindo na tela //

    printf("---------------------------\n");
    printf("CARTA 1\n");
    printf("Estado: %c\n",estado1);
    printf("Código: %c%s\n",estado1,codigo1);
    printf("Nome da Cidade: %s\n",nome_cidade1);
    printf("População: %u\n",populacao1);
    printf("Área: %.0f km² \n",area1);
    printf("PIB: %.2f bilhões de reais\n",pib1);    
    printf("Número de pontos turísticos: %d\n",pontos_tur1);
    printf("Densidade Populacional: %.2f habitantes/km²\n",densidade1);
    printf("PIB/Capita: %.8f bi reais/habitante \n",pibcapita1);    
    printf("Super Poder: %.4f \n",super1);    
 

    printf("---------------------------\n");
    printf("CARTA 2\n");
    printf("Estado: %c\n",estado2);
    printf("Código: %c%s\n",estado2,codigo2);
    printf("Nome da Cidade: %s\n",nome_cidade2);
    printf("População: %u\n",populacao2);
    printf("Área: %.0f km² \n",area2);
    printf("PIB: %.2f bilhões de reais\n",pib2);    
    printf("Número de pontos turídicos: %d\n",pontos_tur2);
    printf("Densidade Populacional: %.2f habitantes/km²\n",densidade2);
    printf("PIB/Capita: %.8f bi reais/habitante \n",pibcapita2); 
    printf("Super Poder: %.4f \n",super2);    


// Comparando os atributos das cartas //

    printf("---------------------------\n");
    printf("---------------------------\n");
    printf("Comparando qual carta vence\n");

    printf("Comparando população...\n");
    resultado = populacao1 < populacao2;
    resultado = resultado + 1;
    printf("População: Carta %d venceu (%d) \n",resultado, populacao1 > populacao2);

    printf("Comparando area...\n");
    resultado = area1 < area2;
    resultado = resultado + 1;
    printf("Área: Carta %d venceu (%d) \n",resultado, area1 > area2);

    printf("Comparando PIB...\n");
    resultado = pib1 < pib2;
    resultado = resultado + 1;
    printf("PIB: Carta %d venceu (%d) \n",resultado, pib1 > pib2);

    printf("Comparando Pontos Turisticos...\n");
    resultado = pontos_tur1 < pontos_tur2;
    resultado = resultado + 1;
    printf("Pontos Turísticos: Carta %d venceu (%d) \n",resultado, pontos_tur1 > pontos_tur2);

    printf("Comparando PIB/Capita...\n");
    resultado = pibcapita1 < pibcapita2;
    resultado = resultado + 1;
    printf("PIB/Capita: Carta %d venceu (%d) \n",resultado, pibcapita1 > pibcapita2);

    printf("Comparando Densidade Populacional...\n");
    resultado = densidade1 > densidade2;
    resultado = resultado + 1;
    printf("Densidade Populacional: Carta %d venceu (%d) \n",resultado, densidade1 < densidade2);

    printf("Comparando Super Poder...\n");
    resultado = super1 < super2;
    resultado = resultado + 1;
    printf("Densidade Populacional: Carta %d venceu (%d) \n",resultado, super1 > super2);

    return 0;
}