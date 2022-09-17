#include <stdio.h>
#include <math.h>
 
int main() {
	float x1,y1;
	float x2,y2;
	scanf("%f" "%f", &x1, &y1);
	scanf("%f" "%f", &x2, &y2);
	float distancia;
	float difX = x2-x1;
	float difY = y2-y1;
	distancia = sqrt(difX*difX+difY*difY);
    printf("%.4f\n",distancia);
    return 0;
}
