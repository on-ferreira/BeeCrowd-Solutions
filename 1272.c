#include <stdio.h>
#include <string.h>

int main()
{
	int N,k,i,j,len;
	char msg[52], decodificada[52];	
	scanf("%d",&N);
	getchar();
	
	for(k=0; k<N; k++)
		{
		fgets(msg,52,stdin);
		len = strlen(msg)-1;
		
		for(i = 0, j = 0; i < len ; i++ )
		{
			if(msg[i] !=' ' && (!i || msg[i-1]== ' '))
			{
				decodificada[j++] = msg[i];
			}
		}
		
		decodificada[j] = '\0';
		printf("%s\n",decodificada);
		}	
	
    return 0;
}
