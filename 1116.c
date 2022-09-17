#include <stdio.h>
 
int main() {
	int y;
	float x,z;
	int ct;
	scanf("%d",&y);
	
  	for(ct=1;ct<=y;ct++)
	  
	{
        scanf("%f %f",&x, &z); 
        if(z==0) printf("divisao impossivel\n");
        else printf("%.1f\n",x/z);
        
    }
    return 0;
}
