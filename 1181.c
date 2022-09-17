#include <stdio.h>
#include <string.h>

int main()
{
	double M[12][12];
	int i,j,dig,x,ct=0;
	char O[2];
	float soma = 0.0,media;
	scanf("%d",&dig);
	scanf("%s",&O);
	for (i=0; i<12;i++)
		{
			for(j=0; j<12; j++)
			{
				scanf("%lf",&M[i][j]);
			}
		}	
	
	for (x=0; x<12;x++)
		{
			soma+=M[dig][x];
			ct++;
		}
	
	if(O[0] == 'S')
	{
		printf("%.1lf\n",soma);
	}

	else if(O[0] == 'M')
	{
		media = soma/ct;
		printf("%.1lf\n",media);
	}
	
	
    return 0;
}
