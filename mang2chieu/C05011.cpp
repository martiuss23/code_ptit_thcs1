#include<stdio.h>

int main(){
	int t, x;
	scanf("%d", &t);
	for(x=1;x<=t;x++){
		int n, m;
		scanf("%d%d", &n, &m);
		int a[n][m], b[n][n], i=0, j, dem=0;
		for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		scanf("%d", &a[i][j]);
		
		i=0;
		while(i<n){
			b[i][dem]=0;
			for(j=0;j<m;j++)
				b[i][dem]+=a[i][j]*a[dem][j];	
			dem++;
			if(dem==n){
				dem=0;
				i++;
			}
		}
		printf("Test %d:\n", x);
		for(i=0;i<n;i++){
			for(j=0;j<n;j++)
			printf("%d ", b[i][j]);
			printf("\n");
		}
	}
	return 0;
}
