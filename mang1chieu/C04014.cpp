#include <stdio.h>

int khactr(int arr[], int n, int a){
	int i;
	for(i=0;i<a;i++)
		if(arr[a]==arr[i]) return 0;
	return 1;
}

int main(){
	int n;
	scanf("%d", &n);
	int arr[n], i, j;
	for(i=0;i<n;i++)
		scanf("%d", &arr[i]);
	for(i=0;i<n;i++){
		int dem=0;
		for(j=0;j<n;j++)
			if(khactr(arr, n, i)==1)
				if(arr[i]==arr[j]) dem++;
		if(dem!=0)
		printf("%d %d\n", arr[i], dem);
	}
	return 0;
}
