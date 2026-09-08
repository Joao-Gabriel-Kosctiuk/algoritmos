#include <stdio.h>

int main()
{
    int n1, n2, soma;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &n2);
    
    soma = n1 + n2;
    
    if (soma < 20){
        printf("A soma é menor que 20.");
    } else if (soma = 20){
        printf("A soma é igual a 20.");
    } else{
         printf("A soma é maior que 20.");
    }
}