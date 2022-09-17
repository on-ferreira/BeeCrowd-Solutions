#include <stdio.h>
 
int main() {
	int cod1, num1, cod2, num2;
	double valor1, valor2;
	scanf("%d %d %lf",&cod1,&num1,&valor1);
	scanf("%d %d %lf",&cod2,&num2,&valor2);
	double total = (valor1*num1)+(valor2*num2);
	printf("VALOR A PAGAR: R$ %.2f\n",total);
	return 0;
}
