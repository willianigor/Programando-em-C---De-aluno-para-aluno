int main(void)
{

float nota[5];
float total,media;
int i,j;
printf("Insira 5 notas.\n");
for ( i = 0; i < 5; i++)
{
//Utiliza-se um laço para realizar a atribuição dos espaços alocados no vetor pelo usuário.
    scanf("%f",&nota[i]);
}
//Outro laço para realizar a soma dos valores contidos no vetor.
for ( j = 0; j < 5; j++)
{
    total += nota[j];
}

media = total / 5;

printf("Valor total das notas -> %f\n",total);
printf("Media simples das notas -> %f \n",media);

getchar();

    return 0;
}