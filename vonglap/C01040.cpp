#include<stdio.h>

int sumUoc(int n){
	int i, sum=0;
	for(i=1;i<n;i++){
		if(n%i==0)
			sum+=i;
	}
	return sum;
}

int soHH(int n){
	if(n<=0) return 0;
	if(sumUoc(n) == n) return 1;
	return 0;
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", soHH(n));
	return 0;
}
