#include <stdio.h>

int main(){
	int n, i=1, j, t=96;
	scanf("%d", &n);
	while(i<=n){
		for(j=1;j<=i;j++){
			if(i%2!=0){
				t++;
				printf("%c ", t);	
			}
			else{
				printf("%c ", t);
				t--;
			}
		}
		printf("\n");
		if(i%2==0) t= t+i;
		else t= t+i+1;
		i++;
	}
	return 0;
}
