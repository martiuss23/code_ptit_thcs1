#include<stdio.h>
#include<math.h>

int sum(int n){
	int i, x=0;
	while(n%2==0){
		x+=2;
		n/=2;
	}
	for(i=3;i<=sqrt(n);i+=2){
		while(n%i==0){
			x+=i;
			n/=i;
		}
	}
	if(n>1) return x+n;
	return x;
}

int main(){
	int t, n;
	long long sum1=0;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		sum1+=sum(n);
	}
	printf("%lld", sum1);
	return 0;
}
