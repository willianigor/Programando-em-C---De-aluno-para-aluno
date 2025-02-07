/* Neste segundo exercício você deverá criar um programa que irá inverter a cifra que o usuário digitar,por exemplo 123 será exibido,após a rodagem do programa,como 321. */

int main(){

int numero,cifra;

printf("Digite um numero inteiro\n");
scanf("%i",&numero);
/*Se o número for positivo,basta utilizar o resto da divisão por 10,que resultará sempre no ultimo digito do número.
Lembre-se que pelo valor ser "int" o que está após a virgula será desconsiderado*/
if (numero >= 0)
{
do
{
//Aqui irá mostrar na tela do usuário o restante da divisão a cada vez que o loop for executado,dessa forma,invertendo o número digitado.
    cifra = numero % 10;
    printf("%i",cifra);
//Lembre-se de dividir o numero por 10 ao final do laço para que o valor,por exemplo,123,torne-se 12,3 ,logo o valor de fato será 12,pois a variável int ignora os decimais.
    numero /= 10;
} while (numero != 0);
/*No caso do número negativo é necessário transformá-lo em um número positivo e realizar o mesmo laço anterior,com o "truque" de exibir o "-" antes do número.*/
} else if (numero < 0)
{
numero *= -1;
printf("-");
do
{
    cifra = numero % 10;
    printf("%i",cifra);
    numero /= 10;
} while (numero != 0);



}
    return 0;
}