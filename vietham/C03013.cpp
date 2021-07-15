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
	int i=0, j=1;
	printf("%d %d ", 0, 1);
	while(i<n-2){
		if(fibo(j)==1){
			printf("%d ", j);
			i++;
		}
		j++;
	}
	return 0;
}
