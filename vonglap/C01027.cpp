#include <stdio.h>

int main(){
	int a, b, n;
	scanf("%d", &n);
	while(n--){
		scanf("%d%d", &a, &b);
		while(a>0){
			if(a<b){
				a=a+b;
				b=a-b;
				a=a-b;
			}
			a=a%b;
		}
		printf("%d\n", b);
	}
	return 0;
}
