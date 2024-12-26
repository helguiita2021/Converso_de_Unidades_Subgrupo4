
void conversorMassa() {// Função para conversão de massa
    int opcao;
    char continuar;
    double valor;
    char unidadeDe[10], unidadePara[10];

    do {
        printf("\nBEM VINDO AO PROGRAMA DE CONVERSÃO DE UNIDADES - EMBARCATECH:\n");
        printf("Escolha qual conversão gostaria de fazer:\n");
        printf(" Digite 1 - Unidades de Massa\n");
        printf(" Digite 2 - Caso deseje Sair do Sistema\n");
        printf(" Informe a sua escolha:\n");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("\n********************************************\n");
            printf("***         Conversor de Massa           ***\n");
            printf("********************************************\n");
            printf("Digite o valor a ser convertido: ");
            scanf("%lf", &valor);

            printf("Digite a unidade de origem (t, kg, g): ");
            scanf("%s", unidadeDe);

            printf("Digite a unidade de destino (t, kg, g): ");
            scanf("%s", unidadePara);

            double fatorDeConversao[3] = {1000000.0, 1000.0, 1.0}; // Fatores para t, kg, g
            const char *unidades[3] = {"t", "kg", "g"};

            int indiceDe = -1, indicePara = -1;

          
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
            } else {
                double resultado = valor * (fatorDeConversao[indiceDe] / fatorDeConversao[indicePara]);
                printf("\n%.2lf %s equivalem a %.2lf %s\n", valor, unidadeDe, resultado, unidadePara);
            }
        } else if (opcao == 2) {
            printf("Saindo...\n");
            return;
        } else {
            printf("Esta opção não é válida!\n");
        }

        printf("\nDeseja escolher outra opção? (S/N): ");
        scanf(" %c", &continuar); 
    } while (continuar == 'S' || continuar == 's');
}
