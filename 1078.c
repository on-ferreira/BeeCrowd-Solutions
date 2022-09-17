#include <stdio.h>
 
int main() {
	int n;
	scanf("%d",&n);
	int ct=1;
   	   	
   	if(n>=2 && n<=1000)
   		{
		while(ct<=10)
		{
		printf("%d x %d = %d\n",ct,n,ct*n);
		ct++;
		}
	   }
    return 0;
}
