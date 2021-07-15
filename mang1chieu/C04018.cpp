#include <stdio.h>

int main(){
	int a, n;
	scanf("%d", &a);
	while(a--){
		scanf("%d", &n);
		int arr[n], i, dem=0;
		for(i=0;i<n;i++)
			scanf("%d", &arr[i]);
		for(i=0;i<n-1;i++)
			if(arr[i]==arr[i+1]) dem++;
		printf("%d\n", dem);
	}
	return 0;
}
