#include<stdio.h>
#include <string.h>

int ktchan(char n){
	if(n=='2'||n=='4'
	||n=='6'||n=='8'
	||n=='0') return 1;
	return 0;
}

int kttnc(char arr[]){
	int i;
	for(i=0;i<strlen(arr)/2;i++){
		if(arr[i]!=arr[strlen(arr)-i-1])	return 0;
		if(ktchan(arr[i])==0)	return 0;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char a[500];
		scanf("%s", &a);
		if(kttnc(a)==1) printf("YES\n");
		else printf("NO\n");
	}
	
	return 0;
}
