#include <stdio.h>

int main() 
{
	double A;
	scanf("%lf",&A);
	if (A<0 || A>100) 			printf("Fora de intervalo\n");	else
	if (0<=A && A<=25) 			printf("Intervalo [0,25]\n");
	if (25<A && A<=50) 			printf("Intervalo (25,50]\n");
	if (50<A && A<=75) 			printf("Intervalo (50,75]\n");
	if (75<A && A<=100) 		printf("Intervalo (75,100]\n");
	return 0;
}
