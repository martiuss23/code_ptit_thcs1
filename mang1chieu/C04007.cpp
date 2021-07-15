#include <stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int arr[a+b], brr[b], i, j;
	for(i=0;i<a;i++)
		scanf("%d", &arr[i]);
	for(i=0;i<b;i++)
		scanf("%d", &brr[i]);
	scanf("%d", &j);
	int c[a+b];
	for(i=0;i<a+b;i++){
		if(i<j) c[i]=arr[i];
		else if(i<j+b && i>=j) c[i]=brr[i-j];
		else c[i]=arr[i-b];
	}
	for(i=0;i<a+b;i++){
		arr[i]=c[i];
		printf("%d ", arr[i]);
	}
	
	return 0;
}
