int main(void){

    float somaDeDigitos (float num1 ,float num2);
    float a,b,soma;

    printf("Digite dois numeros \n");
    scanf("%f", &a);
    scanf("%f", &b);

    soma = somaDeDigitos(a,b);

    printf("A soma vale %f",soma);

    system("pause");
    return 0;
}

float somaDeDigitos (float num1, float num2){

    float converterEmModulo(float num3);

    if (num1 < 0)
    {
        num1 = converterEmModulo (num1);
    }
    if (num2 < 0)
    {
       num2 = converterEmModulo (num2);
    }

    return num1 + num2;

}

float converterEmModulo (float num3){

return num3 * -1;
}