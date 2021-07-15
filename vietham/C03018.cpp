#include <stdio.h>
#include <math.h>
 
int soNt(int n){
	int i;
	if(n==2) return 1;
	if(n%2==0||n<2) return 0;
	for(i=3;i<=sqrt(n);i+=2)
		if(n%i==0) return 0;
	return 1;
}

int fibo(int n){
	int f0=0, fn =1;
	while(n>fn){
		fn+=f0;
		f0=fn-f0;
		if(n==fn) return 1;
	}
	return 0;
}

int tongCs(int n){
	int sum =0;
	while(n>0){
		sum+= n%10;
		n/=10;
	}
	return sum;
}

int soDep(int n){
	if(soNt(n)==1 && fibo(tongCs(n))==1) return 1;
	return 0;
}

int main(){
	int m, n, i;
	scanf("%d %d", &m, &n);
	if(n>m){
		int tmp=n;
		n=m;
		m=tmp;
	}
	for(i=n;i<=m;i++)
		if(soDep(i)==1) printf("%d ", i);
	return 0;
}
