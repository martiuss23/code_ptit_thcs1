#include <stdio.h>

void in(int arr[100][100], int n){
	int i, j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++) printf("%d ", arr[i][j]);
		printf("\n");
	}	
}

void ve(int n){
	int x=0, arr[100][100], i, dem=n*n, j;
	while(x<=n/2){
		for(i=x;i<n-x;i++) arr[x][i]=dem--;
		for(i=x+1;i<n-x;i++) arr[i][n-1-x]=dem--;
		for(i=n-x-2;i>=x;i--) arr[n-x-1][i]=dem--;
		for(i=n-x-2;i>x;i--) arr[i][x]=dem--;
		x++;
	}
	in(arr,n);
}

int main(){
	int n, t;
	scanf("%d", &t);
	for(int i=1;i<=t;i++){
		scanf("%d", &n);
		printf("Test %d:\n", i);
		ve(n);
	} 
	return 0;
}
