#include <stdio.h>

void sxGiam(int *arr, int n){
	int i, j;
	for(i=0;i<n;i++){
		for(j=n-1;j>i;j--){
			if(arr[j]> arr[j-1]){
				int c =arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=c;
			}
		}
	}
}

int main() {
	int n, i;
	scanf("%d", &n);
	int arr[n];
	for(i=0;i<n;i++)
		scanf("%d", &arr[i]);
	sxGiam(arr, n);
	for(i=0;i<n;i++){
		if(arr[i]!=arr[i+1]){
			printf("%d %d", arr[i], arr[i+1]);
			break;
		}
	}
	return 0;
}
