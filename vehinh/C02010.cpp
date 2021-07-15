#include <stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int i,j;
	for(i=1;i<=a;i++){
		int x=i;
		for(j=1;j<=b;j++){
			if(i+j<=b+1 || j==1)
				printf("%d", x);
			else
				printf("%d", b+1-j);
			x++;
		}
		printf("\n");
	}
	return 0;
}
