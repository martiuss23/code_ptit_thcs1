#include<stdio.h>

int giaiThua(int n){
	int i, gt=1;
	for(i=1;i<=n;i++)
		gt*=i;
	return gt;
}

int ketQua(int n){
	int i, x = n, sum=0;
	while(n>0){
		i=n%10;
		sum+= giaiThua(i);
		n/=10;
	}
	if(sum == x) return 1;
	return 0;
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", ketQua(n));
	return 0;
}
