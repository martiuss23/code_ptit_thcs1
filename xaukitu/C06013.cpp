#include <stdio.h>
#include<string.h>

int kt(char a[], int n){
	int i, dem, b[10]={};
	if(a[0]=='0') return -1;
	for(i=0;i<n;i++){
		if(a[i]>'9'||a[i]<'0') return -1;
		if(a[i]=='0') b[0]=1;
		if(a[i]=='1') b[1]=1;
		if(a[i]=='2') b[2]=1;
		if(a[i]=='3') b[3]=1;
		if(a[i]=='4') b[4]=1;
		if(a[i]=='5') b[5]=1;
		if(a[i]=='6') b[6]=1;
		if(a[i]=='7') b[7]=1;
		if(a[i]=='8') b[8]=1;
		if(a[i]=='9') b[9]=1;
	}
	for(i=0;i<10;i++){
		if(b[i]==0) return 0;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char a[1001];
		scanf("%s", &a);
		if(kt(a,strlen(a))==1) printf("YES\n");
		else if(kt(a,strlen(a))==-1) printf("INVALID\n");
		else printf("NO\n");
	}
	return 0;
}
