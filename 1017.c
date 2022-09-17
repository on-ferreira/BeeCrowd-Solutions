#include <stdio.h>
 
int main() {
    int tempo,velocidade;
    scanf("%d",&tempo);
    scanf("%d",&velocidade);
    int km;
	km = velocidade*tempo;
	float consumo = km/12.0;
    printf("%.3f\n",consumo);
    return 0;
}
