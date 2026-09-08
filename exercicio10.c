#include <stdio.h>

int main()
{
	float nota1, nota2, nota3, media, freq;

	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	
	printf("Digite a terceira nota: ");
	scanf("%f", &nota3);
	
    printf("Digite a frequência: ");
	scanf("%f", &freq);

    media = (nota1 + nota2 + nota3)/ 3;

	if (media >= 7 && freq >= 75) {
		printf("Aprovado");
	} else if (media >= 5 && freq >= 75) {
		printf("Recuperação");
	} else {
		printf("Reprovado");
	}
}