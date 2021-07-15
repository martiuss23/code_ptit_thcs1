#include <stdio.h>
#include<string.h>

int kt(char a[]){
	if(a[0]!=a[strlen(a)-1]) return 0;
	return 1;
}

int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		char a[10];
		scanf("%s", &a);
		printf(kt(a)?"YES\n":"NO\n");
	}
	return 0;
}
