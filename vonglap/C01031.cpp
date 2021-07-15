#include <stdio.h>
#include <math.h>

int ktnt(int n){
	if(n==2) return 1;
	if(n<2||n%2==0) return 0;
	int i;
	for(i=3;i<=sqrt(n);i+=2){
		if(n%i==0) return 0;
	}
	return 1; 
}

void ptts(int n){
	int i;
	if(ktnt(n)==1) printf("1x%d", n);
	else{
		for(i=2;i<=sqrt(n);i++){
			while(n%i==0){
				printf("%d", i);
				n/=i;
				if(n>1) printf("x");
			}
		}
		if(n>1) printf("%d", n);
	}
}

int main(){
	int a;
	scanf("%d", &a);
	ptts(a);
	return 0;
}
