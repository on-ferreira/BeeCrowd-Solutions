#include <stdio.h>
 
int main() {
	int n;
	scanf("%d",&n);
	int ct=1;
   	   	
   	if(n>=1 && n<=10000)
   		{
		while(ct<=10000)
		{
			if(ct%n ==2)
			{
				printf("%d\n",ct);
			}
			ct++;
		}
	   }
    return 0;
}
