#include <stdio.h>
#include<math.h>

int ktnt(int n){
	if(n==2) return 1;
	if(n%2==0||n<2) return 0;
	int i;
	for(i=3;i<=sqrt(n);i+=2)
	if(n%i==0)	return 0;
	return 1;
}

int sumCs(int n){
	int sum=0, i;
	while(n>0){
		i=n%10;
		sum+=i;
		if(i==0||i==1||i==4||i==6||i==8||i==9) return 0;
		n/=10;
	}
	if(ktnt(sum)==0) return 0;
	return 1;
}

int kt(int n){
	if(sumCs(n)==0) return 0;
	if(ktnt(n)==0) return 0;
	return 1;
}

void dem(int a, int b){
	int i, dem=0;
	for(i=a;i<=b;i++) if(kt(i)) dem++;
	printf("%d\n", dem);
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b, i;
		scanf("%d%d", &a, &b);
		dem(a,b);
	}
	return 0;
}
