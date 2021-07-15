#include<stdio.h>
#include<math.h>

int ktnt(int n){
	if(n==2||n==5) return 1;
	if(n%2==0 || n<2||n%5==0) return 0;
	int i;
	for(i=3;i<=sqrt(n);i+=2){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	int n;
	scanf("%d", &n);
	int arr[n][n], i, j, sum=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d", &arr[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(ktnt(arr[i][j])==1) sum+=arr[i][j];
		}
	}
	printf("%d", sum);
	return 0;
}
