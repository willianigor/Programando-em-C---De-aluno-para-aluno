int main(){

int idade;

printf("Informe a idade.\n");
scanf("%i",&idade);

//Caso o comando apos o "if" ou o "else" seja de apenas uma linha não há a necessidade de utilizar o colchetes.

if (idade < 18)
{
    printf("Voce esta na menoridade\n");
}else {
    printf("Voce esta na maioridade\n");
}


    return 0;
}