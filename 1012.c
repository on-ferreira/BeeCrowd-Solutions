#include <stdio.h>
 
int main() {
	double A, B, C;
	scanf("%lf %lf %lf",&A,&B,&C);
	double tri = (A*C)/2;
	double circ = 3.14159*C*C;
	double trap = ((A+B)*C)/2;
	double quad = B*B;
	double ret = A*B;
	printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",tri,circ,trap,quad,ret);
	return 0;
}
