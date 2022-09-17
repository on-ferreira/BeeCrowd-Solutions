#include <stdio.h>

int main() {
	int A,B,C;
	scanf("%d %d %d",&A,&B,&C);
	int menor;
		if (A<B && A<C)
		menor = A;
		if (B<A && B<C)
		menor = B;
		if (C<B && C<A)
		menor = C;
	int maior;
		if (A>B && A>C)
		maior = A;
		if (B>A && B>C)
		maior = B;
		if (C>B && C>A)
		maior = C;
	int mediano;
		if (A>B && A<C ||A>C && A<B )
		mediano = A;
		if (B>C && B<A || B>A && B<C)
		mediano = B;
		if (C>B && C<A || C>A && C<B)
		mediano = C;
	printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",menor,mediano,maior,A,B,C);
	return 0;
}
