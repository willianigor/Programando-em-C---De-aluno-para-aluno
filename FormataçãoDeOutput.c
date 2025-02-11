int main(void){

int intVar = 9999999;
int intVar2 = 10;
double doubleVar = 100.123456789;

//Formatação de variáveis inteiras
//Para utilizar o caractere '%' no comando 'printf' deve-se utiliza-lo duas vezes para que o compilador entenda que não há a intenção de chamar uma variável.
/*%d é utilizado para escrever o número na base decimal. %i na sua forma original,inteira. %x escreverá o número na base hexadecimal,base 16. 
Por fim o %o irá escrever o número na base octadecimal,base 8.
Ao se colocar %Xd,sendo X um número,o número que está sendo chamado irá ser colocado X casas a frente,melhorando a visualização em alguns casos para o usuário.*/
printf("Variavel inteira (%%d) = %7d\n",intVar2 );
printf("Variavel inteira (%%i) = %i\n",intVar);
printf("Variavel inteira (%%x) = %x\n",intVar);
printf("Variavel inteira (%%o) = %o\n",intVar);

//Formatação de variáveis double e float
/*O %f irá chamar a variável com a precisão de 6 casas após a vírgula. Todavia,é possível selecionar o número de casas a serem exibidas usando o .X sendo X o número de casas.
%e irá escrever o número em notação científica. %g irá escrever o número com metade do número de casas,ou seja,3. %a será a notação científica,porem sempre partindo do 0,ABCD...*/
printf("Variavel double (%%f) = %.2f\n",doubleVar);
printf("Variavel double (%%e) = %e\n",doubleVar);
printf("Variavel double (%%g) = %g\n",doubleVar);
printf("Variavel double (%%a) = %a\n",doubleVar);

    system("pause");
    return 0;
}