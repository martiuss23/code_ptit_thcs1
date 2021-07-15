#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a;
		scanf("%d", &a);
		printf("%0.15f\n", 1.0/a);
	}
	return 0;
}
