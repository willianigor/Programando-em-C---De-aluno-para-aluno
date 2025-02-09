int main(void)
{
//Pode-se atribuir valores a todos os espaços do vetor dessa forma.
int vetor1[5] = {0};
int vetor [5];
int j,i;
j = 0;

for ( i = 0; i < 5; i++)
{
 //Utiliza-se o laço  "for" para exibir os valores contidos no vetor por meio da variável auxiliar "i" do laço como sendo o índice do vetor
    printf("Valor do vetor na posicao %i -> %i \n",j,vetor[i]);
    j++;
}

    return 0;
}