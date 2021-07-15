#include<stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	int i, j, x;
	for(i=1;i<=a;i++){
		x=0;	
		for(j=1;j<=2*i-1;j++){
			if(j<=i){
				x+=2;
				printf("%d", x);	
			}
			else{
				x-=2;
				printf("%d", x);
			} 	
		}
		printf("\n");
	}
	return 0;
}
