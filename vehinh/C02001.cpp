#include<stdio.h>

void veHV(int n){
	int i, j=0;
	for(j=1;j<=n;j++){
		for(i=1;i<=n;i++)
			printf("*");
		printf("\n");
	}
}

int main(){
	int i;
	scanf("%d", &i);
	veHV(i);
	return 0;
}
