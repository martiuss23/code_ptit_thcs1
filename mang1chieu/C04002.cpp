#include <stdio.h>
#include <math.h>

int ktnt(int n){
	if(n<2) return 0;
	if(n==2) return 1;
	if(n%2==0) return 0;
	int i;
	for(i=3;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
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
		for(i=0;i<a;i++){
			if(ktnt(arr[i])==1) printf("%d ", arr[i]);
		}
		printf("\n");
	}
	return 0;
}
