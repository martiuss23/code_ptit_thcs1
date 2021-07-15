#include <stdio.h>

int main(){
	int n, i=1, j;
	scanf("%d", &n);
	while(i<=2*n){
		for(j=1;j<=i;j++)
			printf("%d", j);
		printf("\n");
		i+=2;
	}
	return 0;
}
