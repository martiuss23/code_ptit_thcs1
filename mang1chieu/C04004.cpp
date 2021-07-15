#include <stdio.h>

long long fibo(int n){
	long long f1=1, fn=1, dem=2;
	if(n==1||n==2) return 1;
	while(dem<n){
		fn=f1+fn;
		f1=fn-f1;
		dem++;
	}
	return fn;
}

int main(){
	int a;
	scanf("%d", &a);
	while(a--){
		int n;
		scanf("%d", &n);
		printf("%lld\n", fibo(n));
	}
	return 0;
}
