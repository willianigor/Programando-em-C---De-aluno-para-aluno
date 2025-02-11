int main(void){

/*Matrizes são vetores com linhas e colunas,assim como na matemática. 
O primeiro valor entre os colchetes refe-se às linhas e o segundo às colunas.
Esta é uma maneira de atribuir valores às posições das matrizes. 
int matriz[3] [3] = {1,2,3,4,5,6,7,8,9};*/

//Esta é uma maneira mais 'visual' de se atribuir os valores de uma matriz
int matriz1 [3] [3] = { {1,2,3},
                        {4,5,6},
                        {7,8,9}};

//O comando system(pause) é utilizado para que após a execução do programa ele não se feche automaticamento. Sendo necessário que o usuário pressione uma tecla.
    system("pause");
    
    return 0;
}