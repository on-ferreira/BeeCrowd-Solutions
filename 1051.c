#include <stdio.h>

int main() {
	float sal;
	scanf("%f", &sal);
	float v1=0,v2=0,v3=0;
	float imposto = 0;
	if(sal<=2000){
		printf("Isento");
	}
	else
	if (sal>2000 && sal<=3000){
		v1 = sal-2000;
		imposto = v1 * 0.08;
		printf("R$ %.2f",imposto);
	}
	else
	if (sal>3000 && sal<=4500){
		v1= 1000;
		v2 = sal-3000;
		imposto = v1*0.08 + v2*0.18;
		printf("R$ %.2f",imposto);
	}
	else
	if(sal>4500){
		v1 = 1000;
		v2 = 1500;
		v3=sal-4500;
		imposto = v1*0.08 + v2*0.18+v3*0.28;
		printf("R$ %.2f",imposto);
	}
		
	printf("\n");
	return 0;
}
