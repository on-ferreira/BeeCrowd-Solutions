#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	double M[12][12];
	int i,j,x,z,y=6,p=5;
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
	
	for (x=7; x<=11;x++)
		{
			for(z=p; z<=y; z++)
			{
				soma+=M[x][z];
			}
			p--;
			y++;
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
