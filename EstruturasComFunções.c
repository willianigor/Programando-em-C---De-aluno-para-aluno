/*Para utilizar uma estrutura em mais de uma funcao deve-se realizar sua definicao fora de todas as funcoes para que ela seja global.
Pois,uma estrutura definida em uma funcao so podera ser utilizada naquela funcao em que foi definida.*/
struct horario
{
    int horas;
    int minutos;
    int segundos;
};
int main(void){

struct horario teste(struct horario x);

struct horario proxima;

struct horario agora;
agora.horas = 10;
agora.minutos = 42;
agora.segundos = 58;

proxima = teste(agora);

printf("%i : %i : %i\n",proxima.horas,proxima.minutos,proxima.segundos);

system("pause");
return 0;
}
struct horario teste(struct horario x){

printf("%i : %i : %i\n",x.horas,x.minutos,x.segundos);

x.horas = 100;
x.minutos = 100;
x.segundos = 100;

return x;
}