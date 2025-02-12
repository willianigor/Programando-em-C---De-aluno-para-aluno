int main(void){

    struct horario
    {
        int hora;
        int minutos;
        int segundos;
//Pode-se declarar uma estrutura e atribuir os valores as variaveis que compoem essa estrutura logo apos sua definicao,economizando,dessa forma,linhas. 
    }agora = {10,20,30}; 

    /*Outra maneira de declarar e definir uma estrutura de forma mais eficaz e dessa maneira,nao apenas logo apos a sua definicao
    struct agora = {10,20,30};*/

    /*A atribuicao de valores as variaveis que compoem uma estrutura e feita em ordem de declaracao na estrutura,ou seja,o primeiro valor sera atribuido ao primeiro declarado.
    Para realizar a atribuicao fora de ordem deve-se escrever dessa forma
    struct agora = {.minutos = 10, .segundos = 30, .hora = 20}*/

    printf("%i:%i:%i\n",agora.hora,agora.minutos,agora.segundos);

    system("pause");
    return 0;
}