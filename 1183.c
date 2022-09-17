#include <stdio.h>
#include <string.h>

int main()
{
	double M[12][12];
	int i,j,x=1;
	char O[2];
	float soma = 0.0,media;
	
	scanf("%s",&O);
	for (i=0; i<12;i++)
		{
			for(j=0; j<12; j++)
			{
				scanf("%lf",&M[i][j]);
			}
		}	
	
	for (i=0; i<12;i++)
		{
			for(j=x; j<12; j++)
			{
				soma+=M[i][j];
			}
			x++;
		}
	
	if(O[0] == 'S')
	{
		printf("%.1lf\n",soma);
	}

	else if(O[0] == 'M')
	{
		media = soma/66.0;
		printf("%.1lf\n",media);
	}
	
	
    return 0;
}
