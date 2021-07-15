#include<stdio.h>
#include<math.h> 
int kthh(int n){
	int i, sum=0;
	for(i=2;i<=sqrt(n);i++){
		if(i*i==n) sum+=i;
		else if(n%i==0) sum+=i+n/i;
	}
	if(sum+1==n) return 1;
	return 0;
}

int main(){
	int n, i;
	scanf("%d", &n);
	for(i=5;i<n;i++)
		if(kthh(i)) printf("%d ", i);
	return 0;
}
