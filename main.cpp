#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	const float quantGarrafas = 150;
	float valorPago, valorPorGarrafa, valorFinal;
	
	printf("\n\n\nEstou vendendo 150 garrafas, me da quanto por cada uma ?\n\n\n?");
	scanf("%f", &valorPago);
	
	if (valorPago < 0) {
		printf("Impossivel amigão");
	} else {
		if (valorPago < 100) {
			valorPorGarrafa = valorPago + 50;
			printf("(Paga a mais 50 reais)");
		} else {
			valorPorGarrafa = valorPago + 30;
			printf("(Paga a mais 30 reais)");
		}
		
		valorFinal = valorPorGarrafa * quantGarrafas;
		
		printf ("\n\n\nValor por garrafa: %.2f", valorPorGarrafa);
		printf("\nValor total pago: %.2f", valorFinal);
	}
	
	
	return 0;

}
