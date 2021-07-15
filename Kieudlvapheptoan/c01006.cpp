#include <stdio.h>

int main(){
	int m, n;
	scanf("%d %d", &m, &n);
	if(n!=0)
	printf("%d %d %d %0.2f %d", m+n, m-n, m*n, 1.0*m/n, m%n);
	else printf("0");
	return 0;
}
