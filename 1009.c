#include <stdio.h>
 
int main() {
	char nome[10];
	double a,b;
    scanf("%s" "%lf" "%lf" , &nome, &a, &b);
    double total = a+0.15*b;
    printf("TOTAL = R$ %.2lf\n",total);
    return 0;
}
