#include <stdio.h>

int kttn9(int n){
	int i=0, j=n;
	while(j>0){
		if(j%10==9) return 0;
		i=i*10 + j%10;
		j/=10;
	}
	if(i==n) return 1;
	return 0;
}

int main(){
	int n, i, dem=0;
	scanf("%d", &n);
	for(i=2;i<n;i++){
		if(kttn9(i)){
			printf("%d ", i);
			dem++;
		}
	}
	printf("\n%d", dem);
	return 0;
}
