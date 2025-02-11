/*Neste exercício você deve criar um programa que peça para o usuário digitar 4 notas de 0 a 10(tipo float) de 4 alunos e os valores deverão ser adicionados a uma matriz bidimensional
Faça a média das notas de cada aluno e armazene as 4 médias em um vetor. Após isso exiba na tela do usuário a média  de cada aluno.*/



int main(void){

int i,j;

float notas [4][4];
float medias [4];
float soma;

//Dois laços for para atribuir os valores das notas em cada aluno,sendo que cada linha representa um aluno.
for ( i = 0; i < 4; i++)
{
    for ( j = 0; j < 4; j++)
    {
    printf("Digite a nota da prova %i do aluno numero %i\n",j+1,i+1);
    scanf("%f",&notas[i][j]);
    }
    
}

//Um laço for para realizar a soma das notas em cada linha,calcular média dessa soma e atribuir o valor dessa média às posições do vetor medias.
for ( i = 0; i < 4; i++)
{
    for ( j = 0; j < 4; j++)
    {
        soma += notas[i][j];
    }
    medias[i] = (soma / 4);
    soma = 0;
}

//Um laço for para exibir na tela do usuário às médias de cada aluno.
for ( i = 0; i < 4; i++)
{
    printf("A media do aluno numero %i vale %f\n",i+1,medias[i]);
}

//Comando system pause para que a tela do usuário não feche após o cálculo das médias.
    system("pause");
    return 0;
}