#include <stdio.h>
 
int main() {
	int x;
	scanf("%d",&x);
	int ct=2;
   	   	
   	if(x%2==0)
   		{
   		while(ct<=x)
   		{
   			printf("%d^2 = %d\n",ct,ct*ct);
   			ct = ct+2;
		   }
   		}
   	else
   	{
   		x = x-1;
   		while(ct<=x)
   		{
   			printf("%d^2 = %d\n",ct,ct*ct);
   			ct=ct+2;
		   }
	   }
    return 0;
}
