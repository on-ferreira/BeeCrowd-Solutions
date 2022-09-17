#include <stdio.h>
 
int main() {
	int x,y;
	int soma = 0, somat =0;
	int ct;
	scanf("%d %d",&x,&y);
	
  	while(ct<=y || ct<=x)
	{
	        if(x<y)
        {
        	for(ct=x;ct<=y;ct++) 
			{
				if(ct%13!=0) soma = soma+ct;
			}
		}
		if (y<x)
		{
		for(ct=y;ct<=x;ct++) 
		{
		if(ct%13!=0) soma = soma+ct;
		}
		
	}
}
	printf("%d\n",soma);
    
    return 0;
}
