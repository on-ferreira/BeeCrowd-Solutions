#include <stdio.h>
 
int main() {
	int par[5],impar[5],dig[15];
	int i=0,j=0,k=0, ctauxpar=0, ctauximpar=0;
	int a=0,b=0,c=0,d=0;
	
	for (k;k<15;k++)
	{
		scanf("%d",&dig[k]);
	}
	
	for (i;i<15;i++)
	{
		if(ctauximpar == 5)
		{
			for(a=0; a<5; a++) printf("impar[%d] = %d\n", a, impar[a]);
            ctauximpar=0;
		}
		
		if(ctauxpar == 5)
        {
            for(b=0; b<5; b++) printf("par[%d] = %d\n", b, par[b]);
            ctauxpar=0;
        }
        
        if(dig[i]%2 != 0)
        {
        	impar[c]=dig[i];
        	++c;
        	ctauximpar++;
        	if(c==5) c=0;
		}
		
		if(dig[i]%2==0)
        {
            par[d]=dig[i];
            ++d;
            ctauxpar++;
            if(d==5) d=0;
        }
	}
	
	for(i=0; i<ctauximpar; i++)	printf("impar[%d] = %d\n", i, impar[i]);
    for(j=0; j<ctauxpar; j++)  printf("par[%d] = %d\n", j, par[j]);


	return 0;
}
