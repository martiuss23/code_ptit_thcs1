#include <stdio.h>

int ktmang(int arr[], int n){
	int i, j=n-1;
	for(i=0;i<j;i++){
		if(arr[i]!=arr[j]) return 0;
		j--;
	}
	return 1;
}

int main(){
	int a;
	scanf("%d", &a);
	while(a--){
		int arr[100], n, i;
		scanf("%d", &n);
		for(i=0;i<n;i++){
			scanf("%d", &arr[i]);
		}
		if(ktmang(arr,n)==1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
