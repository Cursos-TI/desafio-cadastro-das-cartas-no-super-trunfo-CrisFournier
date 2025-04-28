    //Implementar a o cadastro e a criação de duas cartas
    //o cadastro das cartas, utilizando as funções scanf para ler os dados e printf para exibi-los.
    //leitura 


    // Desafio Super Trunfo - Países
    // Tema 1 - Cadastro das Cartas
    // Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
    // Siga os comentários para implementar cada parte do desafio.
    //Teste Cristiane
    
    #include <stdio.h>
    
    int main() {
        // Sugestão: Defina variáveis separadas para cada atributo da cidade.
        // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
        int nPontoTur1, nPontoTur2;
        unsigned int populacao1, populacao2;
        float area1, pib1, area2, pib2, densiPopula1, percapta1, densiPopula2, percapta2, superpoder1, superpoder2;
        float resultPop, resultArea, resultPib, resultTur, resultDen, resultPer, resultSPoder;
        char estadoA[2], codCarta1[3], cidade1[30];
        char estadoB[2], codCarta2[3], cidade2[30];

            
        // Cadastro das Cartas:
        // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
        // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
        printf("PREENCHA AS SEGUINTES INFORMAÇÕES PARA CADASTRAR A CARTA 1 \nCARTA 1- Digite uma letra (de A a H) que represente o Estado: ");
        scanf("%s", &estadoA);
    
        printf("CARTA 1- Digite um Código para seu estado, sendo a letra do Estado, seguida de um número de 01 a 04: ");
        scanf("%s", &codCarta1);
    
        printf("CARTA 1- Digite o nome da Cidade: ");
        scanf("%s", &cidade1);
         
        printf("CARTA 1- Digite o número de habitantes da cidade: ");
        scanf("%u", &populacao1);
    
        printf("CARTA 1- Digite a área da cidade em km²: ");
        scanf("%f", &area1);
    
        printf("CARTA 1- Digite o valor do PIB da cidade em reais: ");
        scanf("%f", &pib1);
    
        printf("CARTA 1- Digite a quantidade de pontos turísticos na cidade: ");
        scanf("%i", &nPontoTur1);

        densiPopula1 = (float)(populacao1/ area1);

        percapta1 = (float)(pib1/populacao1);
    
        printf("AGORA INFORME DADOS PARA A CARTA 2: \nCARTA 2- Digite uma letra (de A a H) que represente o Estado: ");
        scanf("%s", &estadoB);
    
        printf("CARTA 2-  Digite um Código para seu estado, sendo a letra do Estado, seguida de um número de 01 a 04: ");
        scanf("%s", &codCarta2);
    
        printf("CARTA 2- Digite o nome da Cidade: ");
        scanf("%s", &cidade2);
        
        printf("CARTA 2- Digite o número de habitantes da cidade: ");
        scanf("%u", &populacao2);
    
        printf("CARTA 2- Digite a área da cidade em km²: ");
        scanf("%f", &area2);
    
        printf("CARTA 2- Digite o valor do PIB da cidade em reais: ");
        scanf("%f", &pib2);
    
        printf("CARTA 2- Digite a quantidade de pontos turísticos na cidade: ");
        scanf("%i", &nPontoTur2);

        densiPopula2 = (float)(populacao2/ area2);

        percapta2 = (float)(pib2/populacao2);


        //Calcular o Super Poder: Para cada carta, calcule o "Super Poder" somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder"). Armazene o Super Poder como float. Atenção: Preste muita atenção na conversão de tipos ao somar valores de tipos diferentes!
        superpoder1 = (float)(populacao1 + area1 + pib1 + nPontoTur1 + percapta1 + (1/densiPopula1));
        superpoder2 = (float)(populacao2 + area2 + pib2 + nPontoTur2 + percapta2 + (1/densiPopula2));

        //Calculo de resultado
        resultPib = (int)(pib1 > pib2);
        resultTur = (int)(nPontoTur1 > nPontoTur2);
        resultDen = (int)(densiPopula1 < densiPopula2);
        resultPer = (int)(percapta1 > percapta2);
        resultSPoder = (int)(superpoder1 > superpoder2);

                   
        // Exibição dos Dados das Cartas:
        // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
        // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
        printf("Carta 1:\n Estado: %s \n Código: %s \n Nome da Cidade: %s \n População: %u \n Área: %.2f km² \n PIB: %.2f Bilhões de reais \n Número de pontos turísticos: %i \n Densidade Populacional: %.2f hab/km² \n PIB per Capita: R$ %.2f \n Super Poder: %.1f \n", estadoA, codCarta1, cidade1, populacao1, area1, pib1, nPontoTur1, densiPopula1, percapta1, superpoder1);
        
        printf("Carta 2:\n Estado: %s \n Código: %s \n Nome da Cidade: %s \n População: %u \n Área: %.2f km² \n PIB: %.2f Bilhões de reais \n Número de pontos turísticos: %i \n Densidade Populacional: %.2f hab/km² \n PIB per Capita: R$ %.2f \n Super Poder: %.1f \n", estadoB, codCarta2, cidade2, populacao2, area2, pib2, nPontoTur2, densiPopula2, percapta2, superpoder2);
    
        // Comparação entre as cartas:
        //Comparar as Cartas: Compare as duas cartas atributo por atributo (exceto estado, código e nome), incluindo o Super Poder. Lembre-se: para a densidade populacional, a carta com o menor valor vence; para os demais atributos (incluindo Super Poder), a carta com o maior valor vence.
        //Exibir os Resultados das Comparações: Para cada atributo, imprima na tela qual carta venceu (Carta 1 ou Carta 2), exibindo o resultado da comparação (1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence).
        
        printf("População: \n     (Carta 1: %u  >  Carta 2: %u)\n     Carta 1 venceu?( %u) \n", populacao1, populacao2, (populacao1 > populacao2));
        printf("Área: \n     (Carta 1: %.2f  >  Carta 2: %.2f)\n     Carta 1 venceu?( %i)  \n", area1, area2, (area1 > area2));
        printf("PIB: \n     (Carta 1: %.2f  >  Carta 2: %.2f)\n     Carta 1 venceu?( %i)  \n", pib1, pib2, (pib1 > pib2));
        printf("Pontos Turísticos: \n     (Carta 1: %.i  >  Carta 2: %.i)\n     Carta 1 venceu?( %i)  \n", nPontoTur1, nPontoTur2, (nPontoTur1 > nPontoTur2));
        printf("Densidade Populacional: \n     (Carta 1: %.2f  < (é menor) Carta 2: %.2f)\n     Carta 1 venceu?( %i)  \n", densiPopula1, densiPopula2,(densiPopula1 < densiPopula2));
        printf("Pib PerCapta: \n     (Carta 1: %.2f  >  Carta 2: %.2f)\n     Carta 1 venceu?( %i)  \n", percapta1, percapta2, (percapta1 > percapta2));
        printf("Super Poder \nSomando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional). \n     (Carta 1: %.2f  X  Carta 2: %.2f)\n     Carta 1 venceu?( %i)  \n", superpoder1, superpoder2, resultSPoder);

        return 0;
    }
    