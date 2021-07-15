#include <stdio.h>

int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	int c = (a>b)?a:b, i, j, x=c;
	for(i=1;i<=a;i++){
		for(j=1;j<=b;j++){
			if(i+j<=c+1){
				printf("%d", x);
				x--;
				if(i+j==c+1) x++;
			}
			else{
				x++;
				printf("%d", x);	
			}
		}
		printf("\n");
		x=c-i;
	}
	return 0;
}
