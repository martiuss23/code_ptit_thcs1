#include<stdio.h>

void nhap(int arr[], int n){
	for(int i=0;i<n;i++) scanf("%d", &arr[i]);
}

void in(int arr[], int n){
	for(int i=0;i<n;i++) printf("%d ", arr[i]);
	printf("\n");
}

void sx(int arr[], int n){
	for(int i=0;i<n-1;i++){
		int x=i+1;
		for(int j=i+1;j<n;j++)
			x=(arr[x]<arr[j])?x:j;
		if(arr[i]>arr[x]){
			int tmp=arr[i];
			arr[i]=arr[x];
			arr[x]=tmp;
		}
		in(arr, n);
	}
}

int main(){
	int arr[100], n;
	scanf("%d", &n);
	nhap(arr,n);
	sx(arr,n);
	return 0;
}
