int main(void){

int x = 16;
int y = 3;

/*O resultado esperado seria 5,333..., porém o que é exibido é 5.0000. Isso acontece pelo fato de que as variáveis a serem dividias são do tipo inteira.
Para realizar operações que necessitam de números decimais com numeros inteiros é necessário utilizar o casting,ou seja,escrever o tipo de dado que a variável deva assumir DURANTE aquela operação
Para fazer isso basta escrever antes da variável na operação,entre parenteses,o tipo de dado que ela deve assumir*/

float resultado = (float)x /y;

printf("%f\n",resultado);

    system("pause");
    return 0;
}