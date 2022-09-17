#include <stdio.h>
 
int main() {
	int m,n;
	int soma = 0;
	while(1)
	{
	scanf("%d %d",&m,&n);
	if (m<= 0 || n <=0) break;
		
		else
		{
			soma = 0;
			if(m>n)
			{
				for(n;n<=m;n++)
				{
				printf("%d ",n);
				soma+= n;
				}
			printf("Sum=%d\n",soma);
			}
			else if(m<n)
			{
				for(m;m<=n;m++)
				{ 
				printf("%d ",m);
				soma+= m;
				}
			printf("Sum=%d\n",soma);				
			}

		}	

	}
	return 0;
}
