#include <stdio.h>

int main() {
	float A,B,C;
	scanf("%f %f %f",&A,&B,&C);
	float menor;
		if (A<=B && A<=C) 		menor = A;
		if (B<=A && B<=C) 		menor = B;
		if (C<=B && C<=A) 		menor = C;
	float maior;
		if (A>=B && A>=C) 		maior = A;
		if (B>=A && B>=C) 		maior = B;
		if (C>=B && C>=A) 		maior = C;
	float mediano;
		if (A>=B && A<=C || A>=C && A<=B ) 		mediano = A;
		if (B>=C && B<=A || B>=A && B<=C) 		mediano = B;
		if (C>=B && C<=A || C>=A && C<=B) 		mediano = C;
		
	float X = maior, Y = mediano, Z = menor;
	
		if(X>=(Y+Z)) {
			printf("NAO FORMA TRIANGULO\n");
		}
			else{
			
			if((X*X)==(Y*Y+Z*Z)) {
				printf("TRIANGULO RETANGULO\n");
			}
			if(X*X>(Y*Y+Z*Z)) {
				printf("TRIANGULO OBTUSANGULO\n");
			}
		
			if(X*X<(Y*Y+Z*Z)) {
				printf("TRIANGULO ACUTANGULO\n");
			}
			
			if(X==Y && Y==Z) {
				printf("TRIANGULO EQUILATERO\n");
			}
			    else {
			    if(X==Y || Y==Z ) {
				printf("TRIANGULO ISOSCELES\n");
			    }
			}
				}
	return 0;
		
	}
