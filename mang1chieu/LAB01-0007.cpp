#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int arr[n], i, j, sum=0;
	for(i=0;i<n;i++) scanf("%d", &arr[i]);
	for(i=0;i<n;i++) sum+=arr[i];
	printf("%.3f", (float)sum/n);
	return 0;
}
