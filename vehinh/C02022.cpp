#include <stdio.h>

int main(){
	int n, i, j, t=1;
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			if(i%2!=0){
				printf("%d ", t);
				t++;
			}
			else{
				printf("%d ", t);
				t--;
			}
		}
		printf("\n");
		if(i%2==0) t= t+i+1;
		else t= t+i;
	}
	return 0;
}
