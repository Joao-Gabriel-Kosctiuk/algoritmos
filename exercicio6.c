#include <stdio.h>

int main()
{
	float distancia, litros, consumo;

	printf("Digite a distancia a ser percorrida: ");
	scanf("%f", &distancia);

    printf("Digite litros: ");
    scanf("%f", &litros);

    consumo = distancia/ litros;

	if (consumo >= 12) {
		 printf("Eficiente");
	} else {
	     printf("Baixa eficiência");
	}
}