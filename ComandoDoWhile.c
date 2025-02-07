int main(){

int i = 0;

//Apenas "while" há a checagem da condicional antes da execução,logo se a condição nao for atendida o comando nao será executado.

while ( i != 0)
{

    printf("Teste");

}

//"Do...While..." há uma execução antes da checagem,ou seja, o ciclo será executado no mínimo uma vez.

do
{
    printf("Teste 2\n");
} while (i!= 0);


    return 0;
}