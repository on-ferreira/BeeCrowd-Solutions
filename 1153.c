#include <stdio.h>
 
int main() {
	int x;
	int ct,aux,total=1;
	scanf("%d",&x);
	for(ct=x;ct>=1;ct--)
		{
			total*=ct;
		}

	printf("%d\n",total);
    return 0;
}
