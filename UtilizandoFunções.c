int main(void){

    float calcularAreaRetangulo (float base, float altura);

    float area = calcularAreaRetangulo(10.0,20.0);

    printf("A area vale %f",area);

    system("pause");

    return 0;
}

float calcularAreaRetangulo (float base, float altura) {

float area = base * altura;

    return area;
}