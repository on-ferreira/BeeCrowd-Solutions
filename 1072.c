#include <stdio.h>
 
int main() {
	int x,y;
	int ct, in=0, out=0;
	scanf("%d",&y);
	
  	for(ct=0;ct<y;ct++)
	  
	{
        scanf("%d",&x); 
        if((x>=10) && (x<=20))
			{
            in++;
       		}
		else
			{
            out++;
        	}
    }
	printf("%d in\n%d out\n",in,out);
    return 0;
}
