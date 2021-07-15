#include<stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	int i, j, x;
	for(i=1;i<=a;i++){
		x=0;	
		for(j=1;j<=a+i-1;j++){
			if(j<=a-i)	printf("~");
			else{
				if(j<=a){
					x+=2;
					printf("%d", x);	
				}
				else{
					x-=2;
					printf("%d", x);
				} 
			}	
		}
		printf("\n");
	}
	return 0;
}
