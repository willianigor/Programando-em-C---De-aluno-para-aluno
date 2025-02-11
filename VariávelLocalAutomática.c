int main(void){

    void teste (void);
/*Todas as vezes que a função for chamada a variável local automática será reiniciada.*/
    teste();
    teste();

    system("pause");

    return 0;
}

void teste (void){

int variavelLocalAutomatica = 2;

variavelLocalAutomatica *= 2;

printf("%i",variavelLocalAutomatica);

    return 0;
}