#include <stdio.h>

int main() {
	int n, d, m, i;
	scanf("%d", &n);
	int arr[n];
	for(i=0;i<n;i++)
		scanf("%d", &arr[i]);
	scanf("%d", &d);
	if(d<n) m = d;
	else m = d%n;
	int b[n];
	for(i=n-m;i<n;i++)
		b[i]=arr[i];
	for(i=n-1;i>=0;i--){
		if(i>=m)
			arr[i]=arr[i-m];
		else if(i<m)
			arr[i]=b[n-m+i];
	}
	for(i=0;i<n;i++)
		printf("%d ", arr[i]);
	return 0;
}
