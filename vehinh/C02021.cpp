#include <stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	int i=1, j, x, y;
	for(i=1;i<=a;i++){
		y=i;
		x=a-1;
		for(j=1;j<=i;j++){
			printf("%d ", y);
			y+=x;
			x--;
		}
		printf("\n");
	}
	return 0;
}
