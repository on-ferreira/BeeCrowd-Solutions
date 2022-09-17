#include <stdio.h>
#include <string.h>

int main()
{
	int N,i,j,k,len1,len2;
	char cadeia1[51], cadeia2[51], resultado[101];
	
	scanf("%d",&N);
	getchar();
	
	for(k=0; k<N; ++k)
		{
		scanf("%s %s", cadeia1, cadeia2);	
		len1 = strlen(cadeia1);
		len2 = strlen(cadeia2);
		
		
		for(i=0,j=0; i<len1 && i<len2; ++i, j+=2)
		{
			resultado[j] = cadeia1[i];
			resultado[j+1] = cadeia2[i];
		}
		
		for(; i < len1; ++i, ++j) resultado[j] = cadeia1[i];
		 
		for(; i<len2; ++i, ++j) resultado[j] = cadeia2[i];	

		
		resultado[j] = '\0';
		printf("%s\n",resultado);
		 
		}	
	
    return 0;
}
