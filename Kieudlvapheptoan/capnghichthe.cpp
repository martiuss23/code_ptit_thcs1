#include<stdio.h>

int main(){
	int n, arr[1000], dem=0;
	scanf("%d", &n);
	for(int i=0;i<n;i++) scanf("%d", &arr[i]);
	for(int i=0;i<n-1;i++) 
	for(int j=i+1;j<n;j++) if(arr[j]<arr[i]) dem++;
	printf("%d", dem);
	return 0;
}
