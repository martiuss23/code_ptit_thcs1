#include <stdio.h>
#include <math.h>

int ktnt(int n){
	if(n==2) return 1;
	if(n<2|| n%2==0) return 0;
	int i;
	for(i=3;i<=sqrt(n);i+=2)
		if(n%i==0) return 0;
	return 1;
}

int ktsum(int n){
	int sum=0;
	while(n>0){
		sum+=n%10;
		n/=10;
	}
	if(sum%5==0) return 1;
	return 0;
}

int main(){
	int n, i, dem =0;
	scanf("%d", &n);
	for(i=5;i<=n;i++){
		if(ktnt(i)==1 && ktsum(i)==1){
			printf("%d ", i);
			dem++;
		}
	}
	printf("\n%d", dem);
	return 0;
}
