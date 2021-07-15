#include <stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	int i, j, b = 64, d=b+a-1, t=a, c =d;
	for(i=1;i<=a;i++){
		for(j=1;j<=t;j++){
			printf("%c", c);
			c++;
		}
		t--;
		printf("\n");
		c=d-i;
	}
	return 0;
}
