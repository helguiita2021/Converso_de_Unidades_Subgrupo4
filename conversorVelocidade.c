void converterVelocidade() {
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