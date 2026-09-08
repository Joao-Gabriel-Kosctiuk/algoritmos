#include <stdio.h>

int main()
{
    float valor;
    float desconto; 
    float final;
    
    printf("Digite o valor da compra: ");
    scanf("%f", &valor);
    
    if (valor >= 300){
        desconto = valor *0.12;
    } else{
        desconto = valor *0.05;
    }
    final = valor - desconto;
    printf("O desconto foi de:%.2f\n", desconto);
    printf("O valor final foi de: %.2f\n", final);
}