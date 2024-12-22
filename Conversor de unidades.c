#include <stdio.h>
#include <locale.h>

void menu() {
    printf("\nConversor de Unidades de Volume\n");
    printf("Escolha a unidade de origem:\n\n");
    printf("1. Litros\n");
    printf("2. Mililitros\n");
    printf("3. Metros C�bicos\n");
    printf("4. Gal�es (americanos)\n\n");
    printf("Digite a op��o: ");
}

void menu_1() {
    printf("1. Litros\n");
    printf("2. Mililitros\n");
    printf("3. Metros C�bicos\n");
    printf("4. Gal�es (americanos)\n\n");
    printf("Digite a op��o: ");
}

float converterVolume(float valor, int origem, int destino) {
    float resultado = valor;

    // Convers�o para litros como unidade base
    switch (origem) {
        case 1: // Litros
            resultado = valor;
            break;
        case 2: // Mililitros
            resultado = valor / 1000;
            break;
        case 3: // Metros c�bicos
            resultado = valor * 1000;
            break;
        case 4: // Gal�es (americanos)
            resultado = valor * 3.78541;
            break;
        default:
            printf("Op��o de origem inv�lida!\n");
            return -1;
    }

    // Convers�o de litros para a unidade de destino
    switch (destino) {
        case 1: // Litros
            break;
        case 2: // Mililitros
            resultado *= 1000;
            break;
        case 3: // Metros c�bicos
            resultado /= 1000;
            break;
        case 4: // Gal�es (americanos)
            resultado /= 3.78541;
            break;
        default:
            printf("Op��o de destino inv�lida!\n");
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
            printf("Op��o inv�lida! Tente novamente.\n");
            continue;
        }

        printf("Digite o valor a ser convertido: ");
        scanf("%f", &valor);

        printf("\nEscolha a unidade de destino:\n");
        menu_1();
        scanf("%d", &destino);

        if (destino < 1 || destino > 4) {
            printf("Op��o inv�lida! Tente novamente.\n");
            continue;
        }

        resultado = converterVolume(valor, origem, destino);

        if (resultado != -1) {
            printf("Resultado: %.4f\n", resultado);
        }

        char continuar;
        printf("\nDeseja fazer outra convers�o? (s/n): ");
        scanf(" %c", &continuar);

        if (continuar == 'n' || continuar == 'N') {
            break;
        }
    }

    printf("Obrigado por usar o conversor!\n");
    return 0;
}
