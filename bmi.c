#include <stdio.h>

int main(void)
{
    int nota;
    printf("CLASIFICADOR DE NOTAS\n");
    printf("ingresar nota:");
    scanf("%d", &nota );
    
    if (nota>=90){
        printf("Calificación: A");
    }
    else if (nota>=80 && nota<90){
        printf("Calificación: B");
    }
    else if (nota>=70 && nota<80){
        printf("Calificación: C");
    }
    else if (nota>=60 && nota<70){
        printf("Calificación: D");
    }
    else if (nota<60){
        printf("Calificación: F");
    }
    
    printf("\nTABLA DE CALIFICACIONES:\n");
    printf(">= 90       \tCalificación A\n");
    printf("80 - 89     \tCalificación B\n");
    printf("70 - 79     \tCalificación C\n");
    printf("60 - 69     \tCalificación D\n");
    printf("< 60        \tCalificación F\n");
    return 0;
}