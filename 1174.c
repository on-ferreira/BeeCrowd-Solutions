#include <stdio.h>
 
int main() {
	int N[100];
	float V;
	for(int i = 0; i<100; i++)
	{
		scanf("%f", &V);
		if(V<=10)
		{
			printf("A[%d] = %.1f\n",i,V);
		}
	}
	
	return 0;
}
