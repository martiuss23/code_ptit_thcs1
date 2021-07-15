#include <stdio.h>
#include <string.h>


int main(){
	int  n=0;
	char a[101], b[100][101], c[100];
	c[0]='\0';
	gets(a);
	const char s[3]=" \n";
	char *token;
	token=strtok(a, s);
	while(token!=NULL){
		strcpy(b[n++], token);
		token=strtok(NULL, s);
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++)
		if(strcmp(b[i],b[j])==0){
			for(int t=j;t<n-1;t++)
				strcpy(b[t], b[t+1]);
			n--;
		}
	}
	for(int i=0;i<n;i++) printf("%s ", b[i]);
	return 0;
}
