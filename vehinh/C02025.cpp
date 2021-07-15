#include <stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int  i=1, j;
	int t = 64, y = t+b-1, x=t;
	for(i=1;i<=a;i++){
		for(j=1;j<=b;j++){
			if(i+j>=b+1) printf("%c", y);
			else{
				printf("%c", x);
				x++;
			}
		}
		printf("\n");
		x=t+i;
	}
	return 0;
}
