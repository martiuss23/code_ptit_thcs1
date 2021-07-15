#include <stdio.h>

int kt(int arr[], int n, int x){
	int i;
	for(i=0;i<x;i++)
		if(arr[x]<arr[i]) return 0;
	return 1;
}

int main(){
	int a;
	scanf("%d", &a);
	while(a--){
		int n;
		scanf("%d", &n);
		int arr[n], i, dem=1;
		for(i=0;i<n;i++)
			scanf("%d", &arr[i]);
		for(i=1;i<n;i++)
			if(kt(arr, n, i)==1)	dem++;
		printf("%d\n", dem);
	}
	return 0;
}
