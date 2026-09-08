#include <stdio.h>

int main()
{
    float salario, reajuste, novo_salario;
    
    printf("Digite o valor de seu salário: ");
    scanf("%f", &salario);
    
    if (salario < 2500){
        reajuste = salario *0.10;
    } else{
        reajuste = salario *0.06;
    }
    novo_salario = salario + reajuste;
    printf("O salário era de: %.2f\n", salario);
    printf("O reajuste foi de: %.2f\n", reajuste);
    printf("O novo salário é de: %.2f\n", novo_salario);
}