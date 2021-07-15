#include<stdio.h>

int main(){
	int min, a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	min = (a<b)?a:b;
	min = (min<c)?min:c;
	printf("%d", min);
	return 0;
}
