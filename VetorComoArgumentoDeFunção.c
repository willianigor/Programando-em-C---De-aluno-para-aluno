int main(void){

    int vetor [10] = {6,4,8,7,2,1,3,5,9,0};
    int i,
    int ordemCrescente(int vetor[],int n);
    
    
    ordemCrescente(vetor);
    
    for ( i = 0; i < 10; i++)
    {
        printf("%i\n",vetor[i]);
    }
    
        return 0;
    }
    int ordemCrescente (int vetor[], int n){
    
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
    
    
        return 0;
    }