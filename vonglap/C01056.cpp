#include <stdio.h>
#include <string.h>

int ktkg(char a[]){
	int i;
	for(i=0;i<strlen(a)-1;i++)
		if(a[i]>a[i+1]) return 0;
	return 1;
}

int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		char a[18];
		scanf("%s", a);
		printf(ktkg(a)?"YES\n":"NO\n");
	}
	return 0;
}
