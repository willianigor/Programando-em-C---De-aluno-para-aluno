int main(void)
{
/* Os vetores são utilizados para armazenar vários dados em uma única variável. Por exemplo,ao invés de declarar N variáveis sendo 1 para cada pessoa(int notaPedro,notaMichele,notaIgor...)
Pode-se utilizar um vetor chamado "nota" e endereçar o número de alunos(5). O número de dados a serem armazenados no vetor deve estar entre chaves*/
    int nota[5];

//Lembre-se que o primeiro bloco do vetor será o bloco 0.
    nota[0] = 5;
    nota[1] = 6;
    nota[2] = 10;
    nota[3] = 8;
    nota[4] = 7;

    return 0;
}