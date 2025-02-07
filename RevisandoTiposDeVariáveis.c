int main(){

//A variável "int" utiliza o "%i" para ser exibida e para ser atribuida a um valor de input. 
//É uma variável que representa um número inteiro,ou seja,sem vírgula e valores decimais.
//Há também a variável "LONG INT" que difere apenas no espaço alocado em memória. Ou seja,digamos que a variável int possa representar apenas um número até 1 bilhão,acima disso apenas a "Long int" poderia ser utilizada.
//Também é possível utilizar a "const" que nada mais é que determinar o valor daquela variável como constante,não podendo ser alterado ao longo do programa.
//É possível utilizar o prefixo "unsigned" antes das variáveis,assim como "const",nesse caso a variável poderá apenas assumir valores absolutos,positivos.

/*int variavelInt = 1;
printf("%i\n",variavelInt);
scanf("%i",&variavelInt);
printf("%i\n",variavelInt);*/

//A variável "char" utiliza o "%c" para ser exibida e para receber um valor de input. Essa variável armazena um caractere.

/*char variavelChar = 'a';
printf("%c\n",variavelChar);
scanf("%c",&variavelChar);
printf("%c\n",variavelChar);*/

//A variável "Bool" é uma variável binária,ou seja,pode ser atribuida como "true" ou "false", "0" ou "1"
//É utilizada para representar "ligado" e "desligado",etc.

/*bool variavelBool = true;
printf("%i",variavelBool);*/

/*A variável "float" representa números decimais e utiliza o "%f" para ser exibida ou para ser atribuida num input.*/

/*float variavelFloat = 88.88;
printf("%f\n",variavelFloat);
scanf("%f",&variavelFloat);
printf("%f\n",variavelFloat);*/

/*A variável "double" nada mais é que uma variação da variável "float" apenas alocando mais memória e exibindo mais casas depois da vírgula.
Essa variável é utilizada quando há uma grande necessidade em relação à precisão
Há uma diferença na hora de atribuir um valor para a variável "double" no input: ela deve ser chamada por "%lf" e nao apenas "%f"*/

double variavelDouble = 1;
printf("%f\n",variavelDouble);
scanf("%lf",&variavelDouble);
printf("%f\n",variavelDouble);

    
        return 0;
    }