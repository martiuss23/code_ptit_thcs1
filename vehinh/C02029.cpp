#include <stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	int i, j, x, y;
	for(i=1;i<=a;i++){
		y=i+64;
		x=a-1;
		for(j=1;j<=i;j++){
			printf("%c ", y);
			y+=x;
			x--;
		}
		printf("\n");	
	}
	return 0;
}
