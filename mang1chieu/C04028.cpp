#include<stdio.h>

void sxchen(int arr[], int n){
	int i=0, j=1, x, tmp;
	while(i<j){
		if(j==n+1) break;
		tmp=arr[i];
		for(x=i;x>=0;x--){
			if(x==0) arr[x]=tmp;
			else if(tmp>=arr[x-1]){
				arr[x]=tmp;
				break;
			}
			else if(tmp<arr[x-1])
				arr[x]=arr[x-1];
		}
		printf("Buoc %d: ", i);
		for(x=0;x<j;x++)
			printf("%d ", arr[x]);
		printf("\n");
		j++;i++;
	}
}

int main(){
	int n;
	scanf("%d", &n);
	int arr[n], i, j=1;
	for(i=0;i<n;i++)
		scanf("%d", &arr[i]);
	sxchen(arr,n);
	return 0;
}
