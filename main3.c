#include <stdio.h>

int main()
{
    int n1, n2, *p1, *p2, escolha;
    
    printf("Digite o primeiro valor:\n");
    scanf("%i", &n1);
    
    printf("Digite o segundo valor:\n");
    scanf("%i", &n2);
    
    p1 = &n1;
    p2 = &n2;

    printf("Soma dos valores: %i\n", (*p1 + *p2));
    printf("Subtração dos valores: %i\n", (*p1 - *p2));
    printf("Divisão dos valores: %.2f\n", ((float)*p1 / (float)*p2));
    printf("Multiplicação dos valores: %i\n", (*p1 * *p2));

    return 0;
}
