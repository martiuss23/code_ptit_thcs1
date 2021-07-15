#include <stdio.h>
#include <string.h>

int ktnt(char n){
	if(n=='2'||n=='5'||n=='3'||n=='7') return 1;
	return 0;
}

int kt(char a[]){
	int i, x=strlen(a), sum=0;
	for(i=0;i<x/2;i++){
		if(a[i]!=a[x-1-i] ||
		ktnt(a[i])==0) return 0;
	}
	if(x%2!=0 && ktnt(a[x/2])==0) return 0;
	return 1;
}

int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		char a[501];
		scanf("%s", &a);
		if(kt(a)==1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
