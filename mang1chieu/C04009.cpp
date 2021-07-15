#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int arr[n], i;
	for(i=0;i<n;i++)
		scanf("%d", &arr[i]);
	int a[n], b[n], c=0, d=0;
	for(i=0;i<n;i++){
		if(arr[i]%2==0){
			a[c]=arr[i];
			c++;
		}
		else{
			b[d]=arr[i];
			d++;
		}
	}
	for(i=0;i<c;i++)
		printf("%d ", a[i]);
	printf("\n");
	for(i=0;i<d;i++)
		printf("%d ", b[i]);
	return 0;
}
