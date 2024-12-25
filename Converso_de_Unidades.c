#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Estrutura do MENU do Código



void ConversorEnergia()
{ // Função para Converte de Watts para Quilowatts
    float watts, quilowatts;
    printf("Convertendo Watts para Quilowatts:\n");
    printf("Entre com o valor em Watts:");
    scanf("%f", &watts);
    quilowatts = watts / 1000;
    printf("O valor em Quilowatts é: %2f \n", quilowatts);
}

void ConversorTempo()
{
    char unidade, opcao;
    double valor;

    do
    {
        printf("\n--- CONVERSOR DE UNIDADE DE TEMPO ---");
        printf("\n::: Digite o valor e a unidade (h para horas, m para minutos, s para segundos):\n");
        printf(">> Valor: ");
        scanf("%lf%*c", &valor);
        printf(">> Unidade: ");
        scanf("%c%*c", &unidade);

        if (unidade == 'h' || unidade == 'H')
        {
            printf("-- Minutos: %.2lf\n", valor * 60);
            printf("-- Segundos: %.2lf\n", valor * 3600);
        }
        else if (unidade == 'm' || unidade == 'M')
        {
            printf("-- Horas: %.2lf\n", valor / 60);
            printf("-- Segundos: %.2lf\n", valor * 60);
        }
        else if (unidade == 's' || unidade == 'S')
        {
            printf("-- Horas: %.2lf\n", valor / 3600);
            printf("-- Minutos: %.2lf\n", valor / 60);
        }
        else
        {
            printf("Unidade inválida! Use 'h' para horas, 'm' para minutos ou 's' para segundos.\n");
        }
        printf(">> Deseja realizar uma nova conversão? (s/n): ");
        scanf("%c%*c", &opcao);
        printf("\n");
    } while (opcao == 's' || opcao == 'S');
}

void converterVelocidade()
{
    double valor, kmh, ms, mph;

    printf("\n--- Conversor de Velocidade ---\n");
    printf("Digite a velocidade em km/h: ");
    scanf("%lf", &valor);

    kmh = valor;
    ms = kmh / 3.6;
    mph = kmh / 1.609;

    printf("\nVelocidade:\n");
    printf("%.2lf km/h = %.2lf m/s\n", kmh, ms);
    printf("%.2lf km/h = %.2lf mph\n", kmh, mph);
}

int main()
{
    int opcao;

    while (1)
    { // MENU INTERATIVO
        printf("\n BEM VINDO AO PROGRAMA DE CONVERSÃO DE UNIDADES - EMBARCATECH:\n");
        printf("Escolha qual conversão gostaria de fazer:\n");
        printf(" Digite 1 - Unidades de Comprimento\n");
        printf(" Digite 2 - Unidades de Massa\n");
        printf(" Digite 3 - Unidades de Volume\n");
        printf(" Digite 4 - Unidades de Temperatura\n");
        printf(" Digite 5 - Unidades de Velocidade\n");
        printf(" Digite 6 - Unidades de Energia\n");
        printf(" Digite 7 - Unidades de Area\n");
        printf(" Digite 8 - Unidades de Tempo\n");
        printf(" Digite 9 - Unidades de Dados\n");
        printf(" Digite 10 - Caso deseje Sair do Sistema\n");
        printf(" Informe a sua escolha:\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            ConversorComprimento();
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            converterVelocidade();
            break;
        case 6:
            ConversorEnergia();
            break;
        case 7:
            break;
        case 8:
            ConversorTempo();
            break;
        case 9:
            break;
        case 10:
            return 0;
        default:
            printf("Esta opcao não é valida.!\n");
        }
    }
}
