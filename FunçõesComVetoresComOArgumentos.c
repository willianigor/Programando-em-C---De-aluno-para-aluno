int main(void){

    int vetor[10] = {5,6,1,2,4,8,9,0,3,7};
    int i;

    void ordemCrescente(int vetor[], int n);

    ordemCrescente(vetor,10);

    for ( i = 0; i < 10; i++)
    {
        printf("%i\n", vetor[i]);
    }

system("pause");
return 0;
}

void ordemCrescente(int vetor[], int n){

    int i,j,aux;

    for ( i = 0; i < n; i++)
    {
        for ( j = i + 1; j < n; j++)
        {
            if (vetor[i] > vetor[j])
            {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;

            }
            
        }
        
    }
    

}