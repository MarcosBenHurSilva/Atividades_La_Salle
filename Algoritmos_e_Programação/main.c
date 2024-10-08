#include <stdio.h>

int main()
{
    int optionMovie, ticketQtd, ageIdade;
    float valorTotal = 0;

    // Print das opções de filme
    printf("Escolha o filme:\n");
    printf("1. É assim que acaba\n");
    printf("2. Deadpool e Wolverine\n");
    printf("3. Divertidamente 2\n");
    printf("4. Armadilha\n");

    // Input da opção do filme
    printf("Digite o número do filme: ");
    scanf("%d", &optionMovie);

    // Valida a opção escolhida
    if (optionMovie < 1 || optionMovie > 4)
    {
        printf("Opção inválida!\n");
        return 1;
    }

    // Input da quantidade de ingressos
    printf("Digite a quantidade de ingressos: ");
    scanf("%d", &ticketQtd);

    // Cálculo do valor total dos ingressos
    for (int i = 0; i < ticketQtd; i++)
    {
        printf("Digite a idade do espectador %d: ", i + 1);
        scanf("%d", &ageIdade);

        // Valida a idade
        if (ageIdade < 0 || ageIdade > 110)
        {
            printf("Idade inválida!\n");
            return 1;
        }
        // Cálculo do valor do ingresso
        else if (ageIdade < 10 || ageIdade > 65)
        {
            valorTotal += 30.5 / 2; // Meia entrada
        }
        else
        {
            valorTotal += 30.5;
        }
    }

    // Output do resultado
    switch (optionMovie)
    {
    case 1:
        printf("Filme escolhido: É assim que acaba\n");
        break;
    case 2:
        printf("Filme escolhido: Deadpool e Wolverine\n");
        break;
    case 3:
        printf("Filme escolhido: Divertidamente 2\n");
        break;
    case 4:
        printf("Filme escolhido: Armadilha\n");
        break;
    }

    printf("Valor total: R$ %.2f\n", valorTotal);

    return 0;
}