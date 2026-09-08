#include <stdio.h>

int main()
{
	float consumo, tarifa;

	printf("Digite o consumo: ");
	scanf("%f", &consumo);
	
	if (consumo <= 100) {
		tarifa = consumo * 0.60;
	} else if (consumo >= 101 && consumo <= 200){
	    tarifa = consumo * 0.75;
	} else{
	    tarifa = consumo * 0.90;
	}
	printf("A tarifa foi de: %.2f ", tarifa);
}