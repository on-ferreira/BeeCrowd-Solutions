#include <stdio.h>
 
int main() {
	double raio;
    scanf("%lf", &raio);
    double area = 3.14159*raio*raio*raio*(4.00/3.00);
    printf("VOLUME = %.3lf\n",area);
    return 0;
}
