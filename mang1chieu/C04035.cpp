#include<stdio.h>

int main(){
	int a, b, sumU=0, sumD=0, minU=50005, minD=50005, n;
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		scanf("%d%d", &a, &b);
		sumU+=a;
		sumD+=b;
		if(minU>a) minU=a;
		if(minD>b) minD=b;
	}
	sumU+=minD;
	sumD+=minU;
	if(sumU>minU) printf("%d", sumU);
	else printf("%d", sumD);
	return 0;
}
