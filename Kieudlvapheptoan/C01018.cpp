#include <stdio.h>
#include <math.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		int n, cann;
		scanf("%d", &n);
		cann=sqrt(n);
		printf((cann*cann==n)?"YES\n":"NO\n");
	}
	return 0;
}
