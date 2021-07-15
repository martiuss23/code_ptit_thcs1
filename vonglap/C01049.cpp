#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		int a, sochan=0, sole=0;
		scanf("%d", &a);
		while(a>0){
			if((a%10)%2==0) sochan++;
			else sole++;
			a/=10;
		}
		printf("%d %d\n", sole, sochan);
	}
	return 0;
}
