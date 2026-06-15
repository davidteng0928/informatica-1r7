#include <stdio.h>                                   // teng david 418172//
 
int main(void)
{
 int peso;
 float altura;
 float IMC;
    printf("CALCULADORA IMC\n");
    printf("INGRESAR TU PESO:");
    scanf("%d", &peso);
    printf("INGRESAR TU ALTURA:");
    scanf("%f", &altura);
    
IMC =  (float)peso / ( altura * altura );
    printf("TU IMC ES: %.2f \n", IMC);
    
    if ( IMC<18.5){
    printf("TU IMC: bajo peso");
    }
    else if ( IMC>=18.5 && IMC<=24.9){
    printf("TU IMC: peso normal");
    }
    else if (IMC>=25.0 && IMC<=29.9 ){
    printf("TU IMC: Sobrepeso");
    }
    else if( IMC>=30 ){
    printf("TU IMC: Obesidad");
    }
    
    printf("\nINDICE    \t CONDICION\n");
    printf(">18.5       \t bajo peso\n");
    printf("18.5 a 24.9 \t peos normal\n");
    printf("25.0 a 29.9 \t sobrepeso\n");
    printf(">30         \t Obesidad");
    return 0;
}