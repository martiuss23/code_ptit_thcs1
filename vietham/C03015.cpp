#include <stdio.h>
#include <math.h>

int ktnt(long long n){
	if(n==2) return 1;
	if(n<2 || n%2==0) return 0;
	int i;
	for(i=3;i<=sqrt(n);i+=2)
		if(n%i==0) return 0;
	return 1;
}

long long uoc(long long n){
	int i;
	long long x;
	for(i=1;i<=sqrt(n);i++){
		if(n%i==0){
			if(ktnt(n/i))	return n/i;
			else if(ktnt(i))
				x=i;
		}
	}
	return x;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int i;
		long long n;
		scanf("%lld", &n);
		printf("%lld\n", uoc(n));
	}	
	return 0;
}
