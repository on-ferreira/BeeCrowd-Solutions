#include <stdio.h>
 
int main() {
	int m;
	while(1)
	{
	scanf("%d",&m);
	if(m!=2002) printf("Senha Invalida\n");		
	else break;
	}
	printf("Acesso Permitido\n");
	return 0;
}
