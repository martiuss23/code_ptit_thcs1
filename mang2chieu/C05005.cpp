#include <stdio.h>

int main(){
	int n, m, t, x;
	scanf("%d", &t);
	for(x=1;x<=t;x++){		
		scanf("%d%d", &n, &m);
		int arr[n][m], i, j;
		for(i=0;i<n;i++){
			for(j=0;j<m;j++)
				scanf("%d", &arr[i][j]);
		}
		for(i=0;i<n-1;i++){
			for(j=0;j<m-1;j++)
				arr[i][j]=arr[i+1][j+1];
		}
		n--;
		m--;
		printf("Test %d:\n", x);
		for(i=0;i<n;i++){
			for(j=0;j<m;j++)
				printf("%d ", arr[i][j]);
			printf("\n");
		}
	}
	return 0;
}
