#include<stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int i=b-a+1, j, t=64+b, m;
	while(i<=b){
		m=t-i+1;
		for(j=1;j<=b;j++){
			if(j<i){
				printf("%c", m);
				m++;
			}
			else printf("%c", t);
		}
		printf("\n");
		i++;
	}
	return 0;
}
