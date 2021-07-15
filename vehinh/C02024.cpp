#include<stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int x = 65 , i=1, j, y = 65;
	while(i<=a){
		for(j=1;j<=b;j++){
			if(i+j<=b+1){
				printf("%c", y);
				y++;
			}
			else{
				printf("%c", x);
				x--;
			}
		}
		printf("\n");
		i++;
		y=64+i;
		if(i>j){
			x=64+b;
		}
		else x = y -1;
	}
	return 0;
}
