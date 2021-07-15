#include <stdio.h>

int main() {
	int n, i;
	double sum;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
		sum+= 1.0*1/i;
	printf("%0.4f", sum);
	return 0;
}
