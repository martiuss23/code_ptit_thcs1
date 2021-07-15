#include <stdio.h>
#include <math.h>

void phanTich(int n){
	int i;
	for(i=2;i<=sqrt(n);i++){
		while(n%i==0){
			printf("%d ", i);
			n/=i;
		}
	}
	if(n>1) printf("%d", n);
	printf("\n");
}

int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		int a;
		scanf("%d", &a);
		phanTich(a);
	}
	return 0;
}
