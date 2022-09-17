#include <stdio.h>
 
int main() {
	int x;
	scanf("%d",&x);
	int ct=0;
   	   	
   	if(x%2==0)
   		{
   		x = x+1;
   		while(ct<6)
   		{
   			printf("%d\n",x);
   			ct++;
   			x = x+2;
		   }
   		}
   	else
   	{
   		while(ct<6)
   		{
   			printf("%d\n",x);
   			ct++;
   			x = x+2;
		   }
	   }
    return 0;
}
