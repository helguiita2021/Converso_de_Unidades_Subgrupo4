#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função para conversão de massa
void conversorMassa();
double converterMassa(double valor, char unidadeDe[], char unidadePara[]);

// Função principal com menu interativo
int main() {
    int opcao;
    char continuar;

    do {
        printf("\nBEM VINDO AO PROGRAMA DE CONVERSÃO DE UNIDADES - EMBARCATECH:\n");
        printf("Escolha qual conversão gostaria de fazer:\n");
        printf(" Digite 1 - Unidades de Massa\n");
        printf(" Digite 2 - Caso deseje Sair do Sistema\n");
        printf(" Informe a sua escolha:\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                conversorMassa();
                break;
            case 2:
                return 0;
            default:
                printf("Esta opção não é válida!\n");
        }

        printf("\nDeseja escolher outra opção? (S/N): ");
        scanf(" %c", &continuar); // O espaço antes de %c é necessário para ignorar espaços em branco
    } while (continuar == 'S' || continuar == 's');

    return 0;
}

// Implementação da função de conversão de massa
double converterMassa(double valor, char unidadeDe[], char unidadePara[]) {
    double fatorDeConversao[3] = {1000000.0, 1000.0, 1.0}; // Fatores para t, kg, g
    char *unidades[3] = {"t", "kg", "g"};

    int indiceDe = -1, indicePara = -1;

    // Identifica os índices das unidades
    for (int i = 0; i < 3; i++) {
        if (strcmp(unidadeDe, unidades[i]) == 0) {
            indiceDe = i;
        }
        if (strcmp(unidadePara, unidades[i]) == 0) {
            indicePara = i;
        }
    }

    // Valida as unidades
    if (indiceDe == -1 || indicePara == -1) {
        printf("Conversão não suportada.\n");
        return -1.0; // Indica erro
    }

    return valor * (fatorDeConversao[indiceDe] / fatorDeConversao[indicePara]);
}

void conversorMassa() {
    double valor;
    char unidadeDe[10], unidadePara[10];

    printf("\n********************************************\n");
    printf("***         Conversor de Massa           ***\n");
    printf("********************************************\n");
    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    printf("Digite a unidade de origem (t, kg, g): ");
    scanf("%s", unidadeDe);

    printf("Digite a unidade de destino (t, kg, g): ");
    scanf("%s", unidadePara);

    double resultado = converterMassa(valor, unidadeDe, unidadePara);

    if (resultado != -1.0) {
        printf("\n%.2lf %s equivalem a %.2lf %s\n", valor, unidadeDe, resultado, unidadePara);
    } else {
        printf("\nConversão inválida. Tente novamente com unidades suportadas.\n");
    }
}
