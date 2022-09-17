#include <stdio.h>
#include <math.h>
 
int main() {
	int x,y,N,z,aux;
	int count=0;
	int ct = 0;
	scanf("%d",&z);
	while(ct<z)
	{
	scanf("%d",&x);
	count=0;
	for(y=1;y<=x;y++)
		{
			if(x%y==0) 
			{
				count++;	
			}
		}
	if(count==2) printf("%d eh primo",x);
	else printf("%d nao eh primo",x);
	printf("\n");
	ct++;
	}
    return 0;
}
