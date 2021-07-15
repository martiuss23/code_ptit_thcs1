#include<stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	int i=1, j, x;
	while(i<=a){
		x=-1;	
		for(j=1;j<=a+i-1;j++){
			if(j<=a-i)printf("~");
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
		i++;
	}
	return 0;
}
