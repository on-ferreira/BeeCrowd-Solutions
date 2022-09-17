#include <stdio.h>
#include <string.h>

int main()
{
	int N,k,i,j,ct;
	char A[1001],B[1001];
	
	scanf("%d",&N);
	
	for(k=0; k<N; k++)
		{
		ct = 0;
		scanf("%s %s",&A,&B);
		
		for(j=strlen(B),i=strlen(A);j>=0; j--,i--)
		{
			if(B[j]==A[i]) ct++;
		}
			
		if(ct==strlen(B)+1)
		{
			printf("encaixa\n");
		}
		else printf("nao encaixa\n");
		}	
	
    return 0;
}
