#include <stdio.h>

long long giaiThua( int n){
	long long gt=1;
	int i;
	for(i=2;i<=n;i++)
		gt*=i;
	return gt;
}

int main() {
	int a, i;
	long long sum=0;
	scanf("%d", &a);
	for(i=1;i<=a;i++)
		sum+=giaiThua(i);
	printf("%lld", sum);
	return 0;
}
