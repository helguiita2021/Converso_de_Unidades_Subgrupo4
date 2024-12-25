#include <stdio.h>
#include <locale.h>

void conversorUnico() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    int origem, destino;
    float valor, resultado;

    printf("Bem-vindo ao Conversor de Unidades de Volume!\n");

    while (1) {
        printf("\nConversor de Unidades de Volume\n");
        printf("Escolha a unidade de origem:\n\n");
        printf("1. Litros\n");
        printf("2. Mililitros\n");
        printf("3. Metros Cúbicos\n");
        printf("4. Galões (americanos)\n\n");
        printf("Digite a opção: ");
        scanf("%d", &origem);

        if (origem < 1 || origem > 4) {
            printf("Opção inválida! Tente novamente.\n");
            continue;
        }

        printf("Digite o valor a ser convertido: ");
        scanf("%f", &valor);

        printf("\nEscolha a unidade de destino:\n\n");
        printf("1. Litros\n");
        printf("2. Mililitros\n");
        printf("3. Metros Cúbicos\n");
        printf("4. Galões (americanos)\n\n");
        printf("Digite a opção: ");
        scanf("%d", &destino);

        if (destino < 1 || destino > 4) {
            printf("Opção inválida! Tente novamente.\n");
            continue;
        }

        
        resultado = valor;
        switch (origem) {
            case 1: // Litros
                resultado = valor;
                break;
            case 2: // Mililitros
                resultado = valor / 1000;
                break;
            case 3: // Metros cúbicos
                resultado = valor * 1000;
                break;
            case 4: // Galões (americanos)
                resultado = valor * 3.78541;
                break;
            default:
                printf("Opção de origem inválida!\n");
                continue;
        }

      
        switch (destino) {
            case 1: // Litros
                break;
            case 2: // Mililitros
                resultado *= 1000;
                break;
            case 3: // Metros cúbicos
                resultado /= 1000;
                break;
            case 4: // Galões (americanos)
                resultado /= 3.78541;
                break;
            default:
                printf("Opção de destino inválida!\n");
                continue;
        }

        printf("Resultado: %.4f\n", resultado);

        char continuar;
        printf("\nDeseja fazer outra conversão? (s/n): ");
        scanf(" %c", &continuar);

        if (continuar == 'n' || continuar == 'N') {
            break;
        }
    }

    printf("Obrigado por usar o conversor!\n");
}
