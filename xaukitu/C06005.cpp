#include <stdio.h>
#include <string.h>
#include <ctype.h>

void xuly(char b[1000][1000], int n){
	int dd[1000]={};
	for(int i=0;i<n;i++){
		if(dd[i]==0){
			dd[i]=1;
			for(int j=i+1;j<n;j++){
				if(strcmp(b[i],b[j])==0){
					dd[i]++;
					dd[j]=-1;
				}
			}
		}
	}
	for(int i=0;i<n;i++)
		if(dd[i]!=-1) printf("%s %d\n", b[i], dd[i]);
}

int main(){
	char a[1000], b[1000][1000];
	const char s[3]=" \n";
	char *token;
	gets(a);
	int i, len=strlen(a), j, x, t, n=0;
	for(i=0;i<len;i++)
		a[i]=tolower(a[i]);
	token=strtok(a,s);
	while(token != NULL){
		strcpy(b[n++],token);
		token=strtok(NULL, s);
	}
	xuly(b,n);
	
	return 0;
}
