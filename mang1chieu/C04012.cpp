#include <stdio.h>

int xh(int arr[], int n){
	int i;
	for(i=0;i<n;i++)
		if(arr[n]==arr[i]) return 1;
	return 0;
}

int main(){
	int n, arr[100], i, brr[100];
	scanf("%d", &n);
	for(i=0;i<n;i++)
		scanf("%d", &arr[i]);
	int  j=0, y=0, dd=arr[0]+1;
	while(j<n){
		for(i=j+1;i<n;i++)
			if(arr[j]==arr[i] && xh(arr,j)==0){
				brr[y]=arr[j];
				y++;
				break;
			}
		j++;
	
	}
	for(i=0;i<y;i++)
		printf("%d ", brr[i]);
	return 0;
}
