#include <stdio.h>

int main() {
	int x,y;
	scanf("%d %d",&x,&y);
	int horas;
	if (x>y)
	    {
		horas = (24-x)+y;
	    }
	else 
	    {
    	if(y>x)
	      {
	    	horas = y-x;
	    	}
	    	else
	   		{
    		
			horas = 24;
    		}
	       }
	printf("O JOGO DUROU %d HORA(S)\n",horas);
	return 0;
}
