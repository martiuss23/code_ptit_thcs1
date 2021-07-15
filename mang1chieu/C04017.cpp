#include <stdio.h>
#include <math.h>
 
int soNt(int n){
	int i;
	if(n<2) return 0;
	if(n==2) return 1;
	if(n%2==0) return 0;
	for(i=3;i<=sqrt(n);i+=2){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	int n, a, b[1000], m=0;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &a);
		if(soNt(a))
	    	b[m++]=a;
	}
	printf("%d ", m);
	for(int i=0;i<m;i++)
		printf("%d ", b[i]);
	return 0;
}
