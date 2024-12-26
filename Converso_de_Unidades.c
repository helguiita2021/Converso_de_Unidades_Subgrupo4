
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include<string.h>

//Estrutura do MENU do Código

void ConversorEnergia(){//Função para Converte de Watts para Quilowatts
	float watts,quilowatts;
	printf("Convertendo Watts para Quilowatts:\n");
	printf("Entre com o valor em Watts:");
	scanf("%f",&watts);
	quilowatts = watts/1000;
	printf("O valor em Quilowatts é: %2f \n",quilowatts);
	
}

void ConversorTempo(){
    char unidade, opcao; 
    double valor;

    do{
        printf("\n--- CONVERSOR DE UNIDADE DE TEMPO ---");
        printf("\n::: Digite o valor e a unidade (h para horas, m para minutos, s para segundos):\n");
        printf(">> Valor: ");
        scanf("%lf%*c", &valor);
        printf(">> Unidade: ");
        scanf("%c%*c", &unidade);
        
        if (unidade == 'h' || unidade == 'H') {
            printf("-- Minutos: %.2lf\n", valor * 60);
            printf("-- Segundos: %.2lf\n", valor * 3600);
        } else if (unidade == 'm' || unidade == 'M') {
            printf("-- Horas: %.2lf\n", valor / 60);
            printf("-- Segundos: %.2lf\n", valor * 60);
        } else if (unidade == 's' || unidade == 'S') {
            printf("-- Horas: %.2lf\n", valor / 3600);
            printf("-- Minutos: %.2lf\n", valor / 60);
        } else {
            printf("Unidade inválida! Use 'h' para horas, 'm' para minutos ou 's' para segundos.\n");
        }
        printf(">> Deseja realizar uma nova conversão? (s/n): ");
        scanf("%c%*c", &opcao);
        printf("\n");
    }while(opcao == 's' || opcao == 'S');
}

void converterVelocidade(){
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
  
void ConversorTemperatura() {
    float cel, kel, fah;
    int op;

    printf("Escolha o tipo de conversão:\n");
    printf("1. Kelvin para Celsius.\n");
    printf("2. Kelvin para Fahrenheit.\n");
    printf("3. Fahrenheit para Celsius.\n");
    printf("4. Fahrenheit para Kelvin.\n");
    printf("5. Celsius para Kelvin.\n");
    printf("6. Celsius para Fahrenheit.\n");
    scanf("%d", &op);

    switch (op) {
        case 1:
            printf("Digite a temperatura em Kelvin: \n");
            scanf("%f", &kel);
            cel = kel - 273.15;
            printf("A temperatura em Celsius é: %.2f\n", cel);
            break;
        case 2:
            printf("Digite a temperatura em Kelvin: \n");
            scanf("%f", &kel);
            fah = ((kel - 273.15) * (9.0 / 5)) + 32;
            printf("A temperatura em Fahrenheit é: %.2f\n", fah);
            break;
        case 3:
            printf("Digite a temperatura em Fahrenheit: \n");
            scanf("%f", &fah);
            cel = (fah - 32) * (5.0 / 9);
            printf("A temperatura em Celsius é: %.2f\n", cel);
            break;
        case 4:
            printf("Digite a temperatura em Fahrenheit: \n");
            scanf("%f", &fah);
            kel = ((fah - 32) * (5.0 / 9)) + 273.15;
            printf("A temperatura em Kelvin é: %.2f\n", kel);
            break;
        case 5:
            printf("Digite a temperatura em Celsius: \n");
            scanf("%f", &cel);
            kel = cel + 273.15;
            printf("A temperatura em Kelvin é: %.2f\n", kel);
            break;
        case 6:
            printf("Digite a temperatura em Celsius: \n");
            scanf("%f", &cel);
            fah = (cel * (9.0 / 5)) + 32;
            printf("A temperatura em Fahrenheit é: %.2f\n", fah);
            break;
        default:
            printf("Opção inválida\n");
            break;
    }
}

// Função para converter unidades de dados
void ConversorDados() {
    int escolha;
    double valor, resultado;

    printf("\nEscolha a conversao de dados:\n");
    printf("1. Bits para Bytes\n");
    printf("2. Bytes para Kilobytes (KB)\n");
    printf("3. Kilobytes (KB) para Megabytes (MB)\n");
    printf("4. Megabytes (MB) para Gigabytes (GB)\n");
    printf("5. Gigabytes (GB) para Terabytes (TB)\n");
    printf("\nInforme a sua escolha: ");
    scanf("%d", &escolha);

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    switch(escolha) {
        case 1:
            resultado = valor / 8.0;
            printf("%.2f Bits = %.2f Bytes\n", valor, resultado);
            break;
        case 2:
            resultado = valor / 1024.0;
            printf("%.2f Bytes = %.2f Kilobytes (KB)\n", valor, resultado);
            break;
        case 3:
            resultado = valor / 1024.0;
            printf("%.2f Kilobytes (KB) = %.2f Megabytes (MB)\n", valor, resultado);
            break;
        case 4:
            resultado = valor / 1024.0;
            printf("%.2f Megabytes (MB) = %.2f Gigabytes (GB)\n", valor, resultado);
            break;
        case 5:
            resultado = valor / 1024.0;
            printf("%.2f Gigabytes (GB) = %.2f Terabytes (TB)\n", valor, resultado);
            break;
        default:
            printf("Opção inválida!\n");
    }
}

void converter() {//Função criada pélo Colaborador Afonso Souza
    int opcao;
    double valor;

    do {
        printf("\n=== Conversor de Unidades ===\n");
        printf("1. Milímetros para Centímetros\n");
        printf("2. Milímetros para Metros\n");
        printf("3. Milímetros para Quilômetros\n");
        printf("4. Centímetros para Milímetros\n");
        printf("5. Centímetros para Metros\n");
        printf("6. Centímetros para Quilômetros\n");
        printf("7. Metros para Milímetros\n");
        printf("8. Metros para Centímetros\n");
        printf("9. Metros para Quilômetros\n");
        printf("10. Quilômetros para Milímetros\n");
        printf("11. Quilômetros para Centímetros\n");
        printf("12. Quilômetros para Metros\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Saindo...\n");
            break;
        }

        printf("Digite o valor a ser convertido: ");
        scanf("%lf", &valor);

        switch (opcao) {
            case 1:
                printf("%.2f mm = %.2f cm\n", valor, valor / 10);
                break;
            case 2:
                printf("%.2f mm = %.2f m\n", valor, valor / 1000);
                break;
            case 3:
                printf("%.2f mm = %.2f km\n", valor, valor / 1000000);
                break;
            case 4:
                printf("%.2f cm = %.2f mm\n", valor, valor * 10);
                break;
            case 5:
                printf("%.2f cm = %.2f m\n", valor, valor / 100);
                break;
            case 6:
                printf("%.2f cm = %.2f km\n", valor, valor / 100000);
                break;
            case 7:
                printf("%.2f m = %.2f mm\n", valor, valor * 1000);
                break;
            case 8:
                printf("%.2f m = %.2f cm\n", valor, valor * 100);
                break;
            case 9:
                printf("%.2f m = %.2f km\n", valor, valor / 1000);
                break;
            case 10:
                printf("%.2f km = %.2f mm\n", valor, valor * 1000000);
                break;
            case 11:
                printf("%.2f km = %.2f cm\n", valor, valor * 100000);
                break;
            case 12:
                printf("%.2f km = %.2f m\n", valor, valor * 1000);
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 0);
}


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




int main( ){
    int opcao;


    while(1){ // MENU INTERATIVO
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
    scanf("%d",&opcao);
    
    switch(opcao){
        case 1:
        	ConversorComprimento();
            break;
    	case 2:
            conversorMassa();
		    break;
		case 3:
            conversorUnico(); 
		    break;
	    case 4:
            ConversorTemperatura();
		    break;
		case 5:
            converterVelocidade();
		    break;
		case 6:
		    ConversorEnergia();
			break;
		case 7:
            converter();
		    break;
	    case 8:
		  	ConversorTempo();
		    break;
		case 9:
            ConversorDados();
		    break;
		case 10:
		    return 0;
		default:
		    printf("Esta opcao não é valida.!\n"); 			   		 	 	 	       		    		

    }

    }
       

}

