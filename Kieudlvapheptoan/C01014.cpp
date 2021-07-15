#include <stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	if(a==0)
		printf(b==0?"Vo so nghiem":"Vo nghiem");
	else printf("%0.2f", 1.0*(-b)/a);
	return 0;
}
