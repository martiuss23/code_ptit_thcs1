#include<stdio.h>

void nhap(int arr[], int n){
	for(int i=0;i<n;i++)
		scanf("%d", &arr[i]);
}

void in(int arr[], int n){
	int dd[100000]={}, c=0, i, j;
	for(i=0;i<n;i++)
		if(dd[i]==0){
		dd[i]=1;
		for(j=i+1;j<n;j++)
			if(arr[i]==arr[j]){
				dd[i]++;
				dd[j]=-1;
			}
		}
	for(i=0;i<n;i++){
		if(dd[i]>n/2){
			c=1;
			break;
		}
	}
	if(c) printf("%d\n", arr[i]);
	else printf("NO\n");
}

int main(){
	int t,  n, arr[100000];
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		nhap(arr,n);
		in(arr, n);
	}
	return 0;
}
