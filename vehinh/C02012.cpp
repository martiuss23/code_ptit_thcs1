#include <stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int i, j, x;
	for(i=1;i<=a;i++){
		x=i;
		for(j=1;j<=b;j++){
			if(j>i&&j<=b){
				if(j==i+1) x++;
				x++;
				printf("%d", x);
			}
			else{
				printf("%d", x);
				x--;
			}
		}
		printf("\n");
	}
	return 0;
}
