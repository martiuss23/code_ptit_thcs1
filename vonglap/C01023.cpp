#include <stdio.h>
#include<string.h>

int kt(char a[]){
	int i;
	for(i=0;i<strlen(a);i++)
		if(a[i]!='0' && a[i]!='6' && a[i]!='8') return 0;
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
