#include <stdio.h>
 
int main() {
	int a,b,c,d,e,ct=0;
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
   	if(a%2==0) ct++;
   	if(b%2==0) ct++;
   	if(c%2==0) ct++;
   	if(d%2==0) ct++;
   	if(e%2==0) ct++;
   	printf("%d valores pares\n",ct);
    return 0;
}
