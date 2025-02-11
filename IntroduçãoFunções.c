int main(void){

int x;
//Toda função que será usada deverá ser declarada,assim como uma variável.
//A declaração de uma função deve seguir a seguint estrutura ' tipo de retorno nome da função (tipo de argumentos ou variáveis a serem utilizadas na função);'
void imprimaMensagem(void);
x = 0;

//Para ser utilizada basta escrevê-la e colocar entre parenteses os seus argumentos que serão utilizados.
imprimaMensagem();
printf("\n%i\n",x);


    return 0;
}

/*Uma função é um código a parte da função main que pode ser chamado nesta para que seja executada,fazendo com que a função main seja mais sucinta e eficiente.
A função pode ser escrita antes ou depois da função main.*/
void imprimaMensagem (void){

    printf("Hello World");
}