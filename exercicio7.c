#include <stdio.h>

int main()
{
	int idade;

	printf("Digite a sua idade: ");
	scanf("%d", &idade);

	if (idade <= 11) {
		printf("Criança");
	} else if (idade >= 12 && idade <= 17){
	    printf("adolescente");
	} else if (idade >= 18 && idade <= 59){
	    printf("adulto");
	} else{
	    printf("idoso");
	}
}