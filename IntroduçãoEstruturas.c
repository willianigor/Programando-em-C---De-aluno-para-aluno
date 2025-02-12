int main(void){

//Structs ou estruturas são,assim como vetores,conjunto de dados,porém não armazenam apenas um tipo de dado como vetores.
//O que está feito abaixo é a definição da estrutura,ou seja,é uma estrutura do tipo horário que é composta por 3 variáveis inteiras.
struct horario
{
    int hora;
    int minutos;
    int segundos;
    double teste;
    char letra;
};

//Para declarar uma estrutura deve-se fazer dessa maneira. A declaração do tipo de estrutura,ou seja,horario e o nome daquela estrutura: agora.
struct horario agora;

//Para atribuir valores às variaveis que compõem  a estrutura deve digitar : tipo.variável = valor
agora.hora = 9;
agora.minutos = 58;
agora.segundos = 30;

//Para exibir os valores da estrutura no comando printf deve-se apenas digitar tipo.variável ao chamar a variável
printf("%i:%i:%i\n",agora.hora,agora.minutos,agora.segundos);

struct horario depois;
depois.hora = agora.hora + 10;
depois.minutos = agora.minutos;
depois.teste = 50.55 / 123;
depois.letra = 'a';

printf("%i\n",depois.hora);
printf("%i\n",depois.minutos);
printf("%f\n",depois.teste);
printf("%c\n",depois.letra);


    system("pause");
    return 0;
}