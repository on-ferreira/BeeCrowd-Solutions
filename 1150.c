#include <stdio.h>
 
int main() {
	int x,z;
	int ct=1, ctd=0,soma=0;
	scanf("%d",&x);
	while(1)
	{
		scanf("%d",&z);
		if(z>x) break;
	}

	for(ct=x;ct<z;ct++)
	{
		ctd++;
		soma=soma+ct;
		if(soma>z) break;

	}
	printf("%d\n",ctd);

    return 0;
}
