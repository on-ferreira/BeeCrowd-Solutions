#include <stdio.h>
 
int main() {
	int n;
	float a,b,c;
	scanf("%d",&n);
	int ct=1;
   	   	
		while(ct<=n)
		{
		scanf("%f %f %f",&a,&b,&c);
		printf("%.1f\n",(2*a+3*b+5*c)/10);
		ct++;
		}
	return 0;
}
