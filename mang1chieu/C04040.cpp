#include <stdio.h>

void nhap(int arr[], int n){
	int i;
	for(i=0;i<n;i++) scanf("%d", &arr[i]);
}

void xuLy(int arr[], int n){
	int i=0, j=n-1, dau, cuoi;
	long long sum=0, sum1=0;
	while(arr[i]<=0) i++;
	dau=i;
	while(arr[j]<=0) j--;
	cuoi=j;
	for(i=dau;i<=cuoi;i++){
		sum=(arr[i]>sum+arr[i])?arr[i]:sum+arr[i];
		sum1=(sum1>sum)?sum1:sum;
	}
	printf("%lld\n", sum1);
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, arr[100000], i;
		scanf("%d", &n);
		nhap(arr,n);
		xuLy(arr,n);
	}
}
