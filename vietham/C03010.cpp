#include<stdio.h>

int giaiThua(int n){
	int i, gt=1;
	for(i=1;i<=n;i++)
		gt*=i;
	return gt;
}

int ketQua(int n){
	int x = n, sum=0;
	while(n>0){
		sum+= giaiThua(n%10);
		n/=10;
	}
	if(sum == x) return 1;
	return 0;
}

int main(){
	int n, i;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
		if(ketQua(i)) printf("%d ", i);
	return 0;
}
