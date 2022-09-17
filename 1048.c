#include <stdio.h>

int main() {
	float sal;
	scanf("%f", &sal);
	float reajuste,total;
	if(sal>=0 && sal <= 400){
		reajuste = sal * 0.15;
		total = reajuste + sal;
		printf("Novo salario: %.2f\n",total);
		printf("Reajuste ganho: %.2f\n",reajuste);
		printf("Em percentual: 15 %%\n");
	}
	else
	if(sal>400 && sal <= 800){
		reajuste = sal * 0.12;
		total = reajuste + sal;
		printf("Novo salario: %.2f\n",total);
		printf("Reajuste ganho: %.2f\n",reajuste);
		printf("Em percentual: 12 %%\n");
	}
	else
	if(sal>800 && sal <= 1200){
		reajuste = sal * 0.10;
		total = reajuste + sal;
		printf("Novo salario: %.2f\n",total);
		printf("Reajuste ganho: %.2f\n",reajuste);
		printf("Em percentual: 10 %%\n");
	}
	else
	if(sal>1200 && sal <= 2000){
		reajuste = sal * 0.07;
		total = reajuste + sal;
		printf("Novo salario: %.2f\n",total);
		printf("Reajuste ganho: %.2f\n",reajuste);
		printf("Em percentual: 7 %%\n");
	}
	else
	if(sal>2000){
		reajuste = sal * 0.04;
		total = reajuste + sal;
		printf("Novo salario: %.2f\n",total);
		printf("Reajuste ganho: %.2f\n",reajuste);
		printf("Em percentual: 4 %%\n");
	}
	return 0;
}
