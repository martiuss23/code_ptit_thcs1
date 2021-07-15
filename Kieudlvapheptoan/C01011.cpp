#include <stdio.h>

int main() {
	int a;
	scanf("%d", &a);
	printf(!(a%2)?"CHAN":"LE");
	// cach 2
	//if(a%2==0) printf("YES");
	//else printf("NO");
	return 0;
}
