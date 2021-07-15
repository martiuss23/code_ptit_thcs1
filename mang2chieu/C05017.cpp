#include<stdio.h>

void in(int A[100][100], int n, int m){
	int b=0, dem=0;
	while(b<=n/2){
		for(int i=b;i<m-b;i++){
			if(dem==n*m) break;
			dem++;
			printf("%d ", A[b][i]);
		} 
		for(int i=b+1;i<n-b;i++){
			if(dem==n*m) break;
			dem++;
			printf("%d ", A[i][m-b-1]);
		}
		for(int i=m-b-2;i>=b;i--){
			if(dem==n*m) break;
			dem++;
			printf("%d ",A[n-b-1][i]);
		} 
		for(int i=n-b-2;i>b;i--){
			if(dem==n*m) break;
			dem++;
			printf("%d ", A[i][b]);
		} 
		b++;
		if(dem==n*m) break;
	}
}

int main(){
	int t, A[100][100], n, m;
	scanf("%d", &t);
	while(t--){
		scanf("%d%d", &n, &m);
		for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		scanf("%d", &A[i][j]);
		in(A,n, m);
		printf("\n");
	}
	return 0;
}
