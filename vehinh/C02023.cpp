#include <stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int i=1, j, x=97, c=(a>b)?a:b, y=x+c-1, t=y;
	for(i=1;i<=a;i++){
		for(j=1;j<=b;j++){
			if(j<=i){
				printf("%c", y);
				y--;
			}
			else{
				printf("%c", t);
			}
		}
		printf("\n");
		y=x+c-1;
		t--;
	}
	return 0;
}
