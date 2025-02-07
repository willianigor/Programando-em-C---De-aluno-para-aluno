int main(){

    int i;

    printf("Insira um numero inteiro de 1 a 5\n");
    scanf("%i",&i);

//O parenteses em frente o "SWITCH" determina a variável que será utilizada para a comparação dos "cases"
    switch (i)
    {
//É possível utilizar quantos cases forem necessários para o programa.
//O que será digitado em frente a palavra "case" é a condicional da variável que foi colocada em frente a palavra "switch",nesse caso se ela possuirá o valor 1,2,3,4 ou 5.
//A palavra "break" faz com que o o programa interrompa o "switch",ou seja,um comando de parada.
    case 1:
    printf("Primeiro\n");
        break;
    case 2:
    printf("Segundo\n");
    break;
    case 3:
    printf("Terceiro\n");
    break;
    case 4:
    printf("Quarto\n");
    break;
    case 5:
    printf("Quinto\n");
    break;
//Caso nenhum dos "cases" seja satisfeito,a opção "default" será realizada.
    default:
    printf("Opcao invalida\n");
        break;
    }

        return 0;
    }