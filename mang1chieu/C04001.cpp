#include <stdio.h>

void sochan(int arr[], int n){
	int i;
	for(i=0;i<n;i++)
		if(arr[i]%2==0) printf("%d ", arr[i]);
	printf("\n");
}

int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		int arr[100], a, i;
		scanf("%d", &a);
		for(i=0;i<a;i++){
			scanf("%d", &arr[i]);
		}
		sochan(arr,a);
	}
	return 0;
}
