#include <stdio.h>
#include <math.h>

int ktnt(int n){
	if(n==2) return 1;
	if(n%2==0||n<2) return 0;
	int i;
	for(i=3;i<=sqrt(n);i+=2)
		if(n%i==0) return 0;
	return 1;
}
int kttn(int n){
	int stn=0, i=n;
	while(i>0){
		stn= stn*10 + i%10;
		i/=10;
	}
	if(stn==n) return 1;
	else return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b, dem=0, i;
		scanf("%d%d", &a, &b);
		for(i=a;i<b;i++){
			if(kttn(i)&&ktnt(i)){
				printf("%d ", i);
				dem++;
			}
			if(dem==10){
				dem=0;
				printf("\n");
			}
		}
		if(dem==0) printf("\n");
		else
		printf("\n\n");
	}
	return 0;
}
