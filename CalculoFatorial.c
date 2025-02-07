#include <stdio.h>

int main()
{
    int R,N;
    R = 1;

    printf("Digite um numero para saber o seu fatorial.\n");
    scanf("%i",&N);

    for(;N >= 1; --N){
        //R = R * N;
        R *= N;
    }

    printf("Seu fatorial vale %i.\n",R);

    return 0;
}
