#include<stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	int i, j, t;
	for(i=1;i<=a;i++){
		t=62;
		for(j=1;j<=2*i-1;j++){
			if(j<=i){
				t+=2;
				printf("%c", t);
			}
			else{
				t-=2;
				printf("%c", t);
			}
		}
		printf("\n");
	}
	return 0;
}
