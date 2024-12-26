void ConversorComprimento()
{
    int opcaocomp;
    float metro, resultado;

        printf("Conversão de Comprimento:\n");
        printf("1. Metro para Centímetro\n");
        printf("2. Metro para Milímetro\n");
        printf("3. Centimetro para Metro\n");
        printf("4. Milimetro para Metro\n");
        scanf("%d", &opcaocomp);
        printf("Digite o valor que deseja converter: \n");
        scanf("%f", &metro);

        if (opcaocomp == 1)
        {
            resultado = metro * 100; // metro para cm
            printf("O valor é: %.2f cm \n", resultado);
        }
        else if (opcaocomp == 2)
        {
            resultado = metro * 1000; // metro para mm

            printf("O valor é: %.2f mm \n", resultado);
        }
        else if (opcaocomp == 3)
        {
            resultado = metro / 100; // cm para metro

            printf("O valor é: %.2f m \n", resultado);
        }
        else if (opcaocomp == 4)
        {
            resultado = metro / 1000; // mm para metro

            printf("O valor é: %.2f m \n", resultado);
        } else {
            printf("Opção inválida!\n");
        }
    }