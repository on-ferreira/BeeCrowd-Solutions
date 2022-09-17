#include <stdio.h>
 
int main() {
	int x,y;
	int ct=1,ctd=0;
	scanf("%d %d",&x,&y);
	if(x>=1 && x<=20 && x<y && y<1000000)
	for(ct=1;ct<=y;ct++)
	{
		ctd++;
		if(ctd==x)
		{ 
			printf("%d\n",ct);
			ctd=0;
		}
		else { printf("%d ",ct);
		}
}
	

    return 0;
}
