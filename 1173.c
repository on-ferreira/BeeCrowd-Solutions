#include <stdio.h>
 
int main() {
	int V, N[10];
	scanf("%d", &V);
	for(int i = 0; i<10; i++)
	{
		N[i]= V;
		printf("N[%d] = %d\n",i,V);
		V*=2;
	}
	
	return 0;
}
