#include <stdio.h>

int main() {
    int num1, num2;
    int produto = 0;
    
    printf("Digite o primeiro numero inteiro positivo: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero inteiro positivo: ");
    scanf("%d", &num2);
    
    while (num1 > 0) {
        
        if (num1 % 2) produto += num2;
        num1 /= 2;
        num2 *= 2;
        
    }
    
    printf("O produto é: %d\n", produto);
    
    return 0;
}
    
