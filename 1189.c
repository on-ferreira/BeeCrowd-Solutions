#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	double M[12][12];
	int i,j,x,z,y=4,p=0;
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
				for(z=0; z<=p; z++)
				{
					soma+=M[x][z];
				}
			p++;
			}
			
			if(x>5)
			{
				for(z=0;z<=y;z++)
					{
					soma+=M[x][z];	
					}
				y--;
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
