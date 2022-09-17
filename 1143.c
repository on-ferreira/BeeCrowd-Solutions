#include <stdio.h>
 
int main() {
	int n;
	int ct=1;
	scanf("%d",&n);
	if(n>=1 && n<=1000)
	for(ct;ct<=n;ct++)
	{
		printf("%d %d %d\n",ct,ct*ct,ct*ct*ct);
	}
	

    return 0;
}
