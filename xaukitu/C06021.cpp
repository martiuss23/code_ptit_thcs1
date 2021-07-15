#include <stdio.h>
#include <string.h>

int kt(char a[], int n){
	int i, j, chan=0, le=0;
	if(a[0]=='0') return 2;
	for(i=0;i<n;i++){
		if(a[i]>'9'||a[i]<'0') return 2;
		if(a[i]%2==0) chan++;
		else le++;
	}
	if(chan==le) return 0;
	if(n%2==0 && chan>le) return 1;
	if(n%2!=0 && le>chan) return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char a[1001];
		scanf("%s", &a);
		if(kt(a, strlen(a))==1) printf("YES\n");
		else if(kt(a, strlen(a))==0) printf("NO\n");
		else printf("INVALID\n");	
	}
	return 0;
}
