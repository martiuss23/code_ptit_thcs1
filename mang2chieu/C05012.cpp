#include<stdio.h>

int main(){
	int t, x;
	scanf("%d", &t);
	for(x=1;x<=t;x++){
		int n;
		scanf("%d", &n);
		int a[n][n], b[n][n], i, j, dem=0;
		for(i=0;i<n;i++){
			int y=1;
			for(j=0;j<n;j++){
				if(j<=i) a[i][j]=y;
				else a[i][j]=0;
				y++;
			}
		}

		i=0;
		while(i<n){
			b[i][dem]=0;
			for(j=0;j<=i;j++){
				b[i][dem]+=a[i][j]*a[dem][j];
			}	
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
