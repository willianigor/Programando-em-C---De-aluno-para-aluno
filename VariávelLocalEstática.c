int main(void){

    void teste (void);
/*Todas as vezes que a função for chamada a variável local estática não será reiniciada.
Todas as variáveis locais não podem ser utilizadas em outras funções,apenas nas funções em que foram declaradas.*/
    teste();
    teste();

    system("pause");

    return 0;
}

void teste (void){

int variavelLocalAutomatica = 2;

//Para se criar uma variável local estática deve-se usar o prefixo 'static' antes da declaração da variável.
static int variavelLocalEstatica = 2;

variavelLocalEstatica *= 2;

variavelLocalAutomatica *= 2;

printf("%i\n",variavelLocalEstatica);

    return 0;
}