int main(){

    int idade;
    
    printf("Informe a idade.\n");
    scanf("%i",&idade);
if (idade < 5)
{
    printf("Bebe");
    //A comparação "e",ou seja, "isso E aquilo",duas condições simultâneas, é representada pelo duplo E comercial "&&".
}else if( idade > 5 && idade <= 10){
    printf("Criança");
}else if (idade > 10 && idade < 18)
{
    printf("Adolescente");
}else if (idade >= 18 && idade < 60)
{
    printf("Adulto");
}else if (idade >= 60 && idade <= 100)
{
    printf("Idoso");
} else
printf("Anciao");

//É possível utilizar quantos "else if" forem necessários para suprir as necessidades do programa.
//Para finalizar uma sequencia de condicionais,utilizando uma condicional em que caso nenhuma das condicionais prévias nao tenha sido atendida pode-se utitlizar um unico "else"
//O else final é a ultima comparação da sequencia de condicionais.

    
        return 0;
    }