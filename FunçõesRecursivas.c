int main(void){

int fatorial(int x);

int numero,resultado;

printf("Digite um numero\n");
scanf("%i", &numero);

resultado = fatorial(numero);

printf("O fatorial de %i vale %i\n",numero,resultado);

    system("pause");
    return 0;
}
int fatorial(int x){

    int resultado;

    if (x == 0)
    {
        resultado = 1;
    } else
    {
        resultado = x * fatorial(x - 1);
    }
    
return resultado;
}