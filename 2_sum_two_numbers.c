#include <stdio.h>

int main(void) {
    int num1 = 0;
    int num2 = 0;
    int res = 0;
    
    printf("Introduce el primer numero:");
    scanf("%d", &num1);
    
    printf("Introduce el segundo numero:");
    scanf("%d", &num2);
    
    res = num1 + num2;

    printf("La suma de %d y %d es: %d", num1, num2, res);

    return 0;
}
