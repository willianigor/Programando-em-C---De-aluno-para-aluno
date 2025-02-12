/*Crie um programa  que possui uma funcao que recebe como argumento um vetor de tamanho 5 de tipo estrutura.
Sendo que essa estrutura deve armazenas um determinado horario(hh:mm:ss).
Peca que o usuario digite 5 horarios diversos que deverao ser armazenados no argumento recebido.
Crie uma segunda funcao que recebera este mesmo vetor estrutura,mas dessa vez a funcao devera apenas ler os valores armazenados no vetor mostrando uma mensagem apropriada.*/
struct horario
{
    int horas;
    int minutos;
    int segundos;
};
int main(void){

struct horario a[5];

printf("Voce ira digitar 5 horarios\n");

armazenarHorario(a);
mostrarHorarios(a);

system("pause");
return 0;
}
void armazenarHorario(struct horario x[5]){

int i;

for ( i = 0; i < 5; i++)
{
    printf("Digite a hora do horario numero %i\n",i+1);
    scanf("%i",&x[i].horas);
    printf("Digite o minuto do horario %i\n",i+1);
    scanf("%i",&x[i].minutos);
    printf("Digite o segundo do horario %i\n",i+1);
    scanf("%i",&x[i].segundos);
}

    return 0;
}
void mostrarHorarios(struct horario y[5]){

int i;

for ( i = 0; i < 5; i++)
{
    printf("O horario numero %i vale %i:%i:%i\n",i+1,y[i].horas,y[i].minutos,y[i].segundos);
}


    return 0;
}