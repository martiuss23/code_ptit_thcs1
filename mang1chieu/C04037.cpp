#include <stdio.h>

void sxTang(int *arr, int n){
	int i=0, j;
	for(i=0;i<n;i++){
		for(j=n-1;j>i;j--){
			if(arr[j]<arr[j-1]){
				int c = arr[j];
				arr[j] =arr[j-1];
				arr[j-1]= c;
			}
		}
	}
}

int main(){
	int n, i, kt=0;
	scanf("%d", &n);
	int arr[n], brr[n];
	for(i=0;i<n;i++)
		scanf("%d", &arr[i]);
	sxTang(arr, n);
	int j=arr[n-1];
	for(i=0;i<n-1;i++){
		if(arr[i]!=arr[i+1]){
			j=arr[i];
		}
		if(arr[i]==arr[i+1] && arr[i]!=j){
			brr[kt]=arr[i];
			kt++;
			j=arr[i];
		}
	}
	printf("%d\n", kt);
	for(i=0;i<kt;i++){
		printf("%d ", brr[i]);
	}
	return 0;
}
