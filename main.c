#include <stdio.h>

int Soma(int num1, int num2)
{
    int result = num1 + num2;
    
    return result;
}

int Subtracao(int num1, int num2)
{
    int result = num1 - num2;
    
    return result;
}

float Divisao(int num1, int num2)
{
    float result = (float)num1 / (float)num2;
    
    return result;
}

int Multiplicacao(int num1, int num2)
{
    int result = num1 * num2;
    
    return result;
}

int main()
{
    int n1, n2, *p1, *p2, escolha;
    
    printf("Digite o primeiro valor:\n");
    scanf("%i", &n1);
    
    printf("Digite o segundo valor:\n");
    scanf("%i", &n2);
    
    p1 = &n1;
    p2 = &n2;
    
    printf("Digite a operação desejada. (1-Somar / 2-Subtrair / 3-Dividir / 4-Multiplicar):\n");
    scanf("%i", &escolha);
    
    switch(escolha)
    {
        case 1:
            printf("Soma dos valores: %i\n", Soma(*p1,*p2));
        break;
            
        case 2:
            printf("Subtração dos valores: %i\n", Subtracao(*p1,*p2));
        break;
            
        case 3:
            if (n2 == 0)
            {
                printf("Não é possível dividir por 0!!!");
            }
            else
            {
                printf("Divisão dos valores: %.2f\n", Divisao(*p1,*p2));
            }
        break;
            
        case 4:
            printf("Multiplicação dos valores: %i\n", Multiplicacao(*p1,*p2));
        break;
            
        default:
            printf("Opção Inválida!");
    }   
    return 0;
}
