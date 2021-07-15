#include <stdio.h>

int main(){
	int n, i, j, m=0, t;
	scanf("%d", &n);
	int arr[n], brr[n];
	for(i=0;i<n;i++)
		scanf("%d", &arr[i]);
	
	for(i=n-1;i>=0;i--){
		t=0;
		for(j=0;j<i;j++){
			if(arr[i]==arr[j]){
				t=1;
				break;
			}
		}
		if(t==0)
			brr[m++]=arr[i];
	}
	for(j=m-1;j>=0;j--)
		printf("%d ", brr[j]);
	return 0;
}
