int main(void){
    int i;
    struct horario
    {
        int horas;
        int minutos;
        int segundos;
    };
    
    //E possivel criar um vetor de estruturas,deve-se declarar normalmente o numero de estruturas entre colchetes apos o nome,sem mudanca nesta parte de declaracao.
    struct horario teste[5];

    //Atribuir valores as variaveis da estrutura pode ser feita normalmente,apenas lembre-se de especificar entre colchetes o indice do vetor.
    teste[0].horas = 10;
    teste[0].minutos = 20;
    teste[0].segundos = 30;

    printf("%i : %i : %i \n",teste[0].horas,teste[0].minutos,teste[0].segundos);

    //*Uma forma mais eficiente de atribuir valores as variaveis de um vetor de uma estrutura e utilizando a mesma forma vista na aula de inicializacao de vetores de estruturas
    struct horario teste1[5] = {{10,20,30},{40,50,60},{70,80,90},{100,110,120},{130,140,150},{160,170,180}};

    for ( i = 0; i < 5; i++)
    {
        printf("%i : %i : %i \n",teste1[i].horas,teste1[i].minutos,teste1[i].segundos);
    }
    

    system("pause");
    return 0;
}