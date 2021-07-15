#include <stdio.h>
#include <string.h>

int kt(char a[]){
	int i, x=strlen(a), sum=0;
	if(a[0] != '8') return 0;
	for(i=0;i<x/2;i++){
		if(a[i]!=a[x-1-i]) return 0;
		sum += a[i]+a[x-1-i]-2*48;
	}
	if(x%2!=0) sum+=a[x/2]-48;
	if(sum%10==0) return 1;
	return 0;
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
