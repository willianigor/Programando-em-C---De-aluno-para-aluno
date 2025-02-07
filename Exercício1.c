/*Neste exercício você deverá criar um programa em que o usuário irá digitar dois números inteiros e checar se o primeiro número é divisível pelo segundo número digitado.
Após isso deverá ser exibida uma mensagem adequada para cada situação.*/

int main(){

int num1,num2;

printf("Digite o primeiro valor\n");
scanf("%i",&num1);

printf("Digite o segundo valor\n");
scanf("%i",&num2);

if (num2 == 0)
{
printf("Divisao por 0 nao permitida\n");
}else {
//Para descobrir o resto de uma divisão utiliza-se o caractere "%" entre as variáveis a serem comparadas.
    if (num1 % num2 == 0)
    {
    printf("O numero %i pode ser divido por %i de forma exata",num1,num2);
    }else
    printf("O numero %i nao pode ser dividido por %i de forma exata",num1,num2);
    
}


    return 0;
}