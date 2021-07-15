#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int arr[n];
	int i, d, m;
	for(i=0;i<n;i++)
		scanf("%d", &arr[i]);
	scanf("%d", &d);
	if(d<n) m = d;
	else m = d%n;
	int b[m];
	for(i=0;i<m;i++)
		b[i]=arr[i];
	for(i=0;i<n;i++){
		if(i<n-m)
			arr[i]=arr[i+m];
		else if (i>=n-m)
			arr[i]=b[i-n+m];
	}
	for(i=0;i<n;i++)
		printf("%d ", arr[i]);
	return 0;
}
