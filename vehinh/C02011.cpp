#include <stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int i=1, j;
	for(i=1;i<=a;i++){
		int x =i, y=b-1;
		for(j=1;j<=b;j++){
			if(i<=b){
				if(i+j<=b+1){
					printf("%d", x);
					x++;
				}
				else{
					printf("%d", y);
					y--;
				}
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
