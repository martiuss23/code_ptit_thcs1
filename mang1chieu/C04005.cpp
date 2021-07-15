#include <stdio.h>

int max(int arr[], int n){
	int i, mAx=arr[0];
	for(i=1;i<n;i++)
		if(mAx<arr[i]) mAx = arr[i];
	return mAx;
}

void hienThi(int arr[], int n){
	int mAx=max(arr, n), i;
	printf("%d\n", mAx);
	for(i=0;i<n;i++)
		if(mAx==arr[i]) printf("%d ", i);
	printf("\n");
}


int main(){
	int a;
	scanf("%d", &a);
	while(a--){
		int n, i;
		scanf("%d", &n);
		int arr[n];
		for(i=0;i<n;i++)
			scanf("%d", &arr[i]);
		hienThi(arr, n);
	}
	return 0;
}
