#include <stdio.h>
#include<math.h>

void ptts(int n){
	int i, dem=0;
	while(n%2==0){
		n/=2;
		dem++;
	}
	if(dem!=0) printf("2(%d) ", dem);
	for(i=3;i<=sqrt(n);i+=2){
		dem=0;
		while(n%i==0){
			dem++;
			n/=i;
		}
		if(dem!=0) printf("%d(%d) ", i, dem);
	}
	if(n>1) printf("%d(1)", n);
	printf("\n");
}

int main(){
	int n, i;
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		int a;
		scanf("%d", &a);
		printf("Test %d: ", i);
		ptts(a);
	}
	return 0;
}
