int main(void){

    
    int matriz1 [5] [5] = { {1, 2, 3 ,4, 5},
                            {6, 7, 8 ,9, 10},
                            {11,12,13,14,15},
                            {16,17,18,19,20},
                            {21,22,23,24,25}};

    int i,j;

    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            printf("Linha %i e coluna %i tem o valor %i\n",i,j,matriz1[i][j]);
        }
        
    }
    
    
        system("pause");
        
        return 0;
    }