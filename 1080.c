#include <stdio.h>
 
int main() {
	int n;
	int ct=1;
	int maior = 0, maiorpos = 0;
   	   	
		while(ct<=100)
		{
		scanf("%d",&n);
			if(n> maior)
			{
				maior = n;
				maiorpos = ct;
			}
		ct++;
		}
	printf("%d\n%d\n",maior,maiorpos);
	return 0;
}
