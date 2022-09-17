#include <stdio.h>
 
int main() {
	long long int N[61];
	int x,i,ct;
	N[0]=0;
	N[1]=1;
	for(i=2;i<=60;i++)
		{
			N[i]=N[i-2]+N[i-1];
		}

	scanf("%d",&ct);
	for(i=0; i<ct;i++)
	{
		
		scanf("%d",&x);
		if(x>=0 && x<= 60)	printf("Fib(%d) = %lld\n",x,N[x]);
	}
	return 0;
}
