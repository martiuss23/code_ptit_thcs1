#include <stdio.h>

int main(){
	int a, b, i, sum=0;
	scanf("%d %d", &a, &b);
	if(a>b){
		a=a+b;
		b=a-b;
		a=a-b;
	}
	for(i=a;i<=b;i++) sum+=i;
	printf("%d", sum);
	return 0;
}
