#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		int x;
		scanf("%d", &x);
		printf("%lld\n", (long long)x*(x+1)/2);
	}
	return 0;
}
