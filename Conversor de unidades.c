#include <stdio.h>
#include <locale.h>

void menu() {
    printf("\nConversor de Unidades de Volume\n");
    printf("Escolha a unidade de origem:\n\n");
    printf("1. Litros\n");
    printf("2. Mililitros\n");
    printf("3. Metros Cúbicos\n");
    printf("4. Galões (americanos)\n\n");
    printf("Digite a opção: ");
}

void menu_1() {
    printf("1. Litros\n");
    printf("2. Mililitros\n");
    printf("3. Metros Cúbicos\n");
    printf("4. Galões (americanos)\n\n");
    printf("Digite a opção: ");
}

float converterVolume(float valor, int origem, int destino) {
    float resultado = valor;

    // Conversão para litros como unidade base
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
            return -1;
    }

    // Conversão de litros para a unidade de destino
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
            return -1;
    }

    return resultado;
}

int main() {
    setlocale (LC_ALL,"Portuguese_Brazil");
    int origem, destino;
    float valor, resultado;

    printf("Bem-vindo ao Conversor de Unidades de Volume!\n");

    while (1) {
        menu();
        scanf("%d", &origem);

        if (origem < 1 || origem > 4) {
            printf("Opção inválida! Tente novamente.\n");
            continue;
        }

        printf("Digite o valor a ser convertido: ");
        scanf("%f", &valor);

        printf("\nEscolha a unidade de destino:\n");
        menu_1();
        scanf("%d", &destino);

        if (destino < 1 || destino > 4) {
            printf("Opção inválida! Tente novamente.\n");
            continue;
        }

        resultado = converterVolume(valor, origem, destino);

        if (resultado != -1) {
            printf("Resultado: %.4f\n", resultado);
        }

        char continuar;
        printf("\nDeseja fazer outra conversão? (s/n): ");
        scanf(" %c", &continuar);

        if (continuar == 'n' || continuar == 'N') {
            break;
        }
    }

    printf("Obrigado por usar o conversor!\n");
    return 0;
}
