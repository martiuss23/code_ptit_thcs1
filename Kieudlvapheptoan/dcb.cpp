#include<stdio.h>

int kq(int arr[], int n){
	int i, j, t1=0, t2=arr[n-1];
	for(i=0;i<n-2;i++)
		t1+=arr[i];
	for(j=n-2;j>0;j--){
		if(t1==t2) return j;
		t1-=arr[j-1];
		t2+=arr[j];
	}
	return -1;
}

int main(){
	int t, n, arr[100000];
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		for(int i=0;i<n;i++) scanf("%d", &arr[i]);
		int x=kq(arr,n);
		printf(x==-1?"-1\n":"%d\n", x+1);
	}	
	
	return 0;
}
