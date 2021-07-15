#include <stdio.h>

void in(int arr[100][100], int m, int n){
	int i, j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++) printf("%d ", arr[i][j]);
		printf("\n");
	}	
}

void ve(int m, int n){
	int x=0, arr[100][100], i, dem=1, j;
	while(x<=m/2){
		for(i=x;i<n-x;i++) arr[x][i]=dem++;
		for(i=x+1;i<m-x;i++) arr[i][n-1-x]=dem++;
		for(i=n-x-2;i>=x;i--) arr[m-x-1][i]=dem++;
		for(i=m-x-2;i>x;i--) arr[i][x]=dem++;
		x++;
	}
	in(arr,m,n);
}

int main(){
	int n;
	scanf("%d", &n); 
	ve(n,n);
	return 0;
}
