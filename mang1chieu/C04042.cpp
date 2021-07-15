#include <stdio.h>

int kt(int arr[], int n, int x){
	int i;
	for(i=x+1;i<n;i++){
		if(arr[x]==arr[i]) return 1;
	}
	return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int arr[n], i, t=0;
		for(i=0;i<n;i++)
			scanf("%d", &arr[i]);
		for(i=0;i<n;i++){
			if(kt(arr, n, i)==1){
				t=1;
				printf("%d\n", arr[i]);
				break;
			}
		}
		if(t==0) printf("NO\n");
	}
	return 0;
}
