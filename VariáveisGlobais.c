/*Para declarar uma variável global deve-se declará-la fora de todas as funções. Utiliza-se a letra 'g' antes do nome da variável para fins de otimização e facilidade.
As variáveis globais podem ser utilizadas por todas as funções do programa.*/
int gVariavelGlobal = 2;

int main(void){

    void teste (void);
/*Todas as vezes que a função for chamada a variável local estática não será reiniciada.
Todas as variáveis locais não podem ser utilizadas em outras funções,apenas nas funções em que foram declaradas.
As variáveis globais se comportam como variáveis estaticas não sendo reiniciadas quando a função for chamada.*/
    printf("Variavel global vale %i\n",gVariavelGlobal);
    teste();
    teste();

    system("pause");

    return 0;
}

void teste (void){
//Toda variável local automática é uma variável 'normal' declarada em uma função,porém seu valor é reiniciado toda vez que esta função é chamada na função main.
int variavelLocalAutomatica = 2;

//Para se criar uma variável local estática deve-se usar o prefixo 'static' antes da declaração da variável.
static int variavelLocalEstatica = 2;

variavelLocalEstatica *= 2;
variavelLocalAutomatica *= 2;
gVariavelGlobal *= 2;

printf("Variavel local estatica vale %i\n",variavelLocalEstatica);
printf("Variavel local automatica vale %i\n",variavelLocalAutomatica);
printf("Variavel global vale %i\n",gVariavelGlobal);


    return 0;
}