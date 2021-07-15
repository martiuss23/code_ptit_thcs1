#include<stdio.h>

int fibo(int n){
	if(n==0) return 1;
	int fn1=0, fn=1;
	while(fn<n){
		fn= fn + fn1;
		fn1= fn - fn1;
	}
	if(fn==n) return 1;
	return 0;
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", fibo(n));
	return 0;
}
