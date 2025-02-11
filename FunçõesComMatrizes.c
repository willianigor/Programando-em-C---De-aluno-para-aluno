int main(void){

void funcaoPrintf(int matriz[][3]);
int matriz[3][3] = {1,2,3,4,5,6,7,8,9};

funcaoPrintf(matriz);

    system("pause");
    return 0;
}
//Ao lidar com matrizes como argumentos de funções é necessário no mínimo especificar o número de colunas(O segundo número).
void funcaoPrintf(int matriz[][3]){
int i,j;
    for ( i = 0; i < 3; i++)
{ 
    for ( j = 0; j < 3; j++)
    {
        printf(" %i ",matriz[i][j]);
    }
    printf("\n");
}


}