#include <stdio.h>
 
int main() {
	int N,m;
	int n100,n50,n20,n10,n5,n2,m1;
	int m50,m25,m10,m5,m1c;
	scanf("%d.%d",&N,&m);
	n100 = N/100;
	N= N - n100*100;
	n50 = N/50;
	N = N-n50*50;
	n20=N/20;
	N=N-n20*20;
	n10=N/10;
	N=N-n10*10;
	n5=N/5;
	N=N-n5*5;
	n2=N/2;
	N=N-n2*2;
	m1=N;
	N = N-m1;
	m50 = m/50;
	m= m - 50*m50;
	m25 = m/25;
	m = m-m25*25;
	m10 = m/10;
	m = m - 10*m10;
	m5 = m/5;
	m = m - 5*m5;
	m1c = m; 
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n",n100);
	printf("%d nota(s) de R$ 50.00\n",n50);
	printf("%d nota(s) de R$ 20.00\n",n20);
	printf("%d nota(s) de R$ 10.00\n",n10);
	printf("%d nota(s) de R$ 5.00\n",n5);
	printf("%d nota(s) de R$ 2.00\n",n2);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n",m1);
	printf("%d moeda(s) de R$ 0.50\n",m50);
	printf("%d moeda(s) de R$ 0.25\n",m25);
	printf("%d moeda(s) de R$ 0.10\n",m10);
	printf("%d moeda(s) de R$ 0.05\n",m5);
	printf("%d moeda(s) de R$ 0.01\n",m1c);
	


	return 0;
}
