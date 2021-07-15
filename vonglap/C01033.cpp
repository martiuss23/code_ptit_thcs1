#include <stdio.h>
#include <string.h>

int kttn(char n[]){
	int i, len=strlen(n);
	for(i=0;i<strlen(n)/2;i++)
		if(n[i]!=n[len-1-i]) return 0;
	return 1;
}

int main(){
	int a;
	scanf("%d", &a);
	while(a--){
		char n[18];
		scanf("%s", &n);
		printf(kttn(n)?"YES\n":"NO\n");	
	}
	return 0;
}
