#include <stdio.h>

void ve(int n){
	int i=1, j;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==1||i==n||j==1||j==n) printf("*");
			else printf(".");
		} 
		printf("\n");
	}
}

int main(){
	int n;
	char c;
	scanf("%d", &n);
	ve(n);
	return 0;
}
