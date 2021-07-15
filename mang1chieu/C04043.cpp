#include<stdio.h>
#include <math.h>

void nhap(int arr[], int n){
	int i;
	for(i=0;i<n;i++) scanf("%d", &arr[i]);
}

void qs(int arr[], int left, int right){
	int l=left, r=right;
	int pivot=arr[(l+r)/2];
	while(l<=r){
		while(arr[l]>pivot) l++;
		while(arr[r]<pivot) r--;
		if(l<=r){
			int tmp=arr[l];
			arr[l]=arr[r];
			arr[r]=tmp;
			l++;
	        r--;
		}
		
	}
	if(l<right) qs(arr,l,right);
	if(left<r) qs(arr,left,r);
}

int kt(int arr[], int n){
	int i, j, z;
	for(i=0;i<n-2;i++){
		for(j=i+1;j<n-1;j++){
			long long t=(long long)arr[i]*arr[i]-(long long)arr[j]*arr[j];
			long long q=sqrt(t);
			if(q*q==t){
				for(z=j+1;z<n;z++){
					if(q>arr[z]) break;
					else if(q==arr[z]) return 1;	
				}
			}
		}
	}
	return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, arr[5000];
		scanf("%d", &n);
		nhap(arr,n);
		qs(arr,0,n-1);
		printf(kt(arr,n)?"YES\n":"NO\n");
	}
	return 0;
}
