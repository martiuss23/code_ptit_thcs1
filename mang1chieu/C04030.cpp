#include <stdio.h>

void sxT(int arr[],int  n){
	int i, j;
	for(i=0;i<n-1;i++){
		for(j=n-1;j>i;j--){
			if(arr[j]<arr[j-1]){
				int t=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=t;
			}
		}
	}
	
}
void sxG(int arr[],int n){
	int i, j;
	for(i=0;i<n-1;i++){
		for(j=n-1;j>i;j--){
			if(arr[j]>arr[j-1]){
				int t=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=t;
			}
		}
	}
}

int main(){
	int t, x;
	scanf("%d", &t);
	for(x=1;x<=t;x++){
		int n, i;
		scanf("%d", &n);
		int a[n], b[n];
		for(i=0;i<n;i++)
			scanf("%d", &a[i]);
		for(i=0;i<n;i++)
			scanf("%d", &b[i]);
		sxT(a,n);
		sxG(b,n);
		printf("Test %d:\n", x);
		for(i=0;i<2*n;i++){
			if(i%2==0) printf("%d ", a[i/2]);
			if(i%2!=0) printf("%d ", b[(i-1)/2]);
		}
		printf("\n");
	}
	return 0;
}
