int main()
{
int i,j;
for ( i = 1; i <= 10 ; i++)
{
    printf("**Volta %i\n",i);

/*Este segundo laço será executado COMPLETAMENTE a cada ciclo do primeiro laço*/
for (j = 1; j <= 10; j++)
{
    printf("** Ponto %i\n",j);
}
    printf("\n");
}
    return 0;
}