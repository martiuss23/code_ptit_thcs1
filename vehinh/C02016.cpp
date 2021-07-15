#include<stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	int i=1, j, x;
	while(i<=a){
		if(i%2==0) x =2;
		else x = 1;
		for(j=1;j<=i;j++){
			printf("%d", x);
			x+=2;
		}
		printf("\n");
		i++;
	}
	return 0;
}
