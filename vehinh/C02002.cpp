#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int i=1, j, x = 2*n-1;
	for(i=1;i<=n;i++){
		for(j=1;j<=x;j++){
			if(i+j>n) printf("*");
			else printf("~");
		}
		printf("\n");
		x--;
	}
	return 0;
}
