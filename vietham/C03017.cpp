#include<stdio.h>
#include <math.h>

int ktT(int n){
	int i;
	while(n>9){
		i=n%10;
		n/=10;
		if(i<=n%10) return 0;
	}
	return 1;
}

int ktG(int n){
	int i;
	while(n>9){
		i=n%10;
		n/=10;
		if(i >=n%10) return 0;
	}
	return 1;
}

int ktnt(int n){
	int x=n, j=x%10;
	x/=10;
	if(j==x%10) return 0;
	if(j>x%10)
		if(ktT(x)==0) return 0;
	if(j<x%10)
		if(ktG(x)==0) return 0;
	if(n==2) return 1;
	if(n%2==0||n<2) return 0;
	int i;
	for(i=3;i<=sqrt(n);i+=2)
		if(n%i==0) return 0;
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, i, j=0, dem=0;
		scanf("%d", &n);
		for(i=1;i<=n;i++)
			j=j*10+9;
		for(i=(j+1)/10;i<=j;i++){
			if(ktnt(i)== 1 )
			dem++;
		}
		printf("%d\n", dem);
	}
	return 0;
}
