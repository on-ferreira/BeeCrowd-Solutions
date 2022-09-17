#include <stdio.h>
 
int main() {
	int a,b,c,d,e,ct=0;
	int ctimpar=0, ctpos =0, ctneg = 0;
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
   	if(a%2==0) ct++; else ctimpar++;
   	if(b%2==0) ct++; else ctimpar++;
   	if(c%2==0) ct++; else ctimpar++;
   	if(d%2==0) ct++; else ctimpar++;
   	if(e%2==0) ct++; else ctimpar++;
   	
   	if(a>0) ctpos++; 
	if(a<0) ctneg++;
   	if(b>0) ctpos++; 
   	if(b<0) ctneg++;
   	if(c>0) ctpos++; if(c<0) ctneg++;
   	if(d>0) ctpos++; if(d<0) ctneg++;
   	if(e>0) ctpos++; if(e<0) ctneg++;
   	
   	printf("%d valor(es) par(es)\n",ct);
   	printf("%d valor(es) impar(es)\n",ctimpar);
   	printf("%d valor(es) positivo(s)\n",ctpos);
   	printf("%d valor(es) negativo(s)\n",ctneg);
    return 0;
}
