#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Cristiane

#include <stdio.h>

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int populacao1, nPontoTur1, populacao2, nPontoTur2;
    float area1, pib1, area2, pib2;
    char estadoA[10], codCarta1[3], cidade1[30];
    char estadoB[10], codCarta2[3], cidade2[30];
        
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("PREENCHA AS SEGUINTES INFORMAÇÕES PARA CADASTRAR A CARTA 1 \nCARTA 1- Digite uma letra (de A a H) que represente o Estado: ");
    scanf("%s", &estadoA);

    printf("CARTA 1-  Digite um Código para seu estado, sendo a letra do Estado, seguida de um número de 01 a 04: ");
    scanf("%s", &codCarta1);

    printf("CARTA 1- Digite o nome da Cidade: ");
    scanf("%s", &cidade1);
    
    printf("CARTA 1- Digite o número de habitantes da cidade: ");
    scanf("%i", &populacao1);

    printf("CARTA 1- Digite a área da cidade em km²: ");
    scanf("%f", &area1);

    printf("CARTA 1- Digite o valor do PIB da cidade em reais: ");
    scanf("%f", &pib1);

    printf("CARTA 1- Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%i", &nPontoTur1);

    printf("AGORA INFORME DADOS PARA A CARTA 2: \nCARTA 2- Digite uma letra (de A a H) que represente o Estado: ");
    scanf("%s", &estadoB);

    printf("CARTA 2-  Digite um Código para seu estado, sendo a letra do Estado, seguida de um número de 01 a 04: ");
    scanf("%s", &codCarta2);

    printf("CARTA 2- Digite o nome da Cidade: ");
    scanf("%s", &cidade2);
    
    printf("CARTA 2- Digite o número de habitantes da cidade: ");
    scanf("%i", &populacao2);

    printf("CARTA 2- Digite a área da cidade em km²: ");
    scanf("%f", &area2);

    printf("CARTA 2- Digite o valor do PIB da cidade em reais: ");
    scanf("%f", &pib2);

    printf("CARTA 2- Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%i", &nPontoTur2);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Carta 1:\n Estado: %s \n Código: %s \n Nome da Cidade: %s \n População: %i \n Área: %.2f km² \n PIB: R$ %.2f \n Número de pontos turísticos: %i \n", estadoA, codCarta1, cidade1, populacao1, area1, pib1, nPontoTur1);
    
    printf("Carta 2:\n Estado: %s \n Código: %s \n Nome da Cidade: %s \n População: %i \n Área: %.2f km² \n PIB: R$ %.2f \n Número de pontos turísticos: %i \n", estadoB, codCarta2, cidade2, populacao2, area2, pib2, nPontoTur2);

    return 0;
}
