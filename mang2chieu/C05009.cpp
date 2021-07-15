#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int arr[n][n], i, j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
		scanf("%d", &arr[i][j]);
	}
	for(i=0;i<n;i++){
		int c=arr[i][i];
		arr[i][i]=arr[i][n-i-1];
		arr[i][n-i-1]=c;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
		printf("%d ", arr[i][j]);
		printf("\n");
	}
	return 0;
}
