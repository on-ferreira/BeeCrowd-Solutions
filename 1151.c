#include <stdio.h>
 
int main() {
	int x;
	int fibo1=0,fibo2=1,aux,ct;
	scanf("%d",&x);
	
	while(1)
	{
		for(ct=1;ct<=x;ct++)
		{
			aux = fibo1;
			fibo1=fibo2;
			fibo2=aux+fibo1;
			printf("%d",aux);
			if (ct<x) 		printf(" ");
		}

		if(ct>x) break;
	}
	printf("\n");
    return 0;
}
