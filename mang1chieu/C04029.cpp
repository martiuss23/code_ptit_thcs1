#include <stdio.h>

int ktt(int arr[], int n){
	int i;
	for(i=0;i<n-1;i++)
		if(arr[i]>arr[i+1]) return 0;
	return 1;
}

int main(){
	int n;
	scanf("%d", &n);
	int arr[n], i,j=0;
	for(i=0;i<n;i++)
		scanf("%d", &arr[i]);
	for(i=n-1;i>0;i--){
		for(j=0;j<i;j++){
			if(arr[j]>arr[j+1]) {
				int tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
		printf("Buoc %d: ", n-i);
		for(j=0;j<n;j++)
			printf("%d ", arr[j]);
		printf("\n");
		if(ktt(arr, n)==1) break;
	}
	return 0;
}
