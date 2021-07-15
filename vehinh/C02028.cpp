#include <stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	int i=1, j, b = 65, t=a;
	for(i=1;i<=a;i++){
		for(j=1;j<=t;j++){
			printf("%c", b);
			b+=2;
		}
		printf("\n");
		t--;
		b=65;
		b+= i*2;
	}
	return 0;
}
