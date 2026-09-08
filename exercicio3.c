#include <stdio.h>

int main()
{
    int num;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    if (num % 2 == 0){
        printf("É um número par");
    } else{
        printf("É um número impar");
    }
}