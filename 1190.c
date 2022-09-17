#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	double M[12][12];
	int i,j,x,z,ct_fin=11,ct_in=7;
	char O[2];
	double soma = 0.0,media;
	
	scanf("%s",&O);
	for (i=0; i<12;i++)
		{
			for(j=0; j<12; j++)
			{
				scanf("%lf",&M[i][j]);
			}
		}	
	
	for (x=1; x<=10;x++)
		{
			if(x<=5)
			{
				for(z=ct_fin; z<=11; z++)
				{
					soma+=M[x][z];
				}
			ct_fin--;
			}
			
			if(x>5)
			{
				for(z=ct_in;z<=11;z++)
					{
					soma+=M[x][z];	
					}
				ct_in++;
			}
			
		}
	
	if(O[0] == 'S')
	{
		printf("%.1lf\n",soma);
	}

	else if(O[0] == 'M')
	{
		media = soma/30.0;
		printf("%.1lf\n",media);
	}
	
	
    return 0;
}
