#include <stdio.h>
 
int main() {
	int a;
    scanf("%d", &a);
    int b=a/3600;
    a = a - b*3600;
    int c = a/60;
    a = a - c*60;
    int d = a;
    printf("%d:%d:%d\n",b,c,d);
    return 0;
}
