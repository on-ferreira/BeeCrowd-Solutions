#include <stdio.h>
 
int main() {
 	float a,b,c,d,e;
 	scanf("%f %f %f %f",&a,&b,&c,&d);
 	float media = (2*a+3*b+4*c+d)/10;
 	printf("Media: %.1f\n",media);
 	if (media>=7.0) printf("Aluno aprovado.\n");
 	else if (media>=5.0 && media < 7.0) 
 		{
 			printf("Aluno em exame.\n");
 			scanf("%f",&e);
 			printf("Nota do exame: %.1f\n",e);
 			media = (media+e)/2;
 			if(media>=5.0) 
			 	{printf("Aluno aprovado.\nMedia final: %.1f\n",media);
			 }
 			if(media<5.0) printf("Aluno reprovado.\n");
		 }
	else printf("Aluno reprovado.\n");
	return 0;
}
