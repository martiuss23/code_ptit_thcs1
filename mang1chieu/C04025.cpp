#include<stdio.h>

void sxtang(int arr[], int m, int n){
	int i, j;
	for(i=m;i<n;i++){
		for(j=n;j>i;j--){
			if(arr[j]<arr[j-1]){
				int a = arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=a;
			}
		}
	}
}

int main(){
	int n;
	scanf("%d", &n);
	int i, j , arr[n], t=0;
	for(i=0;i<n;i++)
		scanf("%d", &arr[i]);
	for(i=0;i<n-1;i++){
		if(arr[i]%2==0){
			t++;
			continue;
		}
		for(j=n-1;j>i;j--){
			if(arr[j]%2==0){
				int a=arr[j];
				arr[j]=arr[i];
				arr[i]=a;
				t++;
				break;
			}
		}
	}
	sxtang(arr,0, t-1);
	sxtang(arr,t,n-1);
	for(i=0;i<n;i++) printf("%d ", arr[i]);
	return 0;
}
