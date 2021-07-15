#include<stdio.h>
#include<string.h>
#include<ctype.h>

void chuanhoa(char s[]){
	char *token=strtok(s," ");
	while(token!=NULL){
		char s1[81];
		for(int i=0;i<strlen(token);i++) token[i]=tolower(token[i]);
		strcpy(s1,token);
		token=strtok(NULL," ");
		if(token!=NULL) printf("%c", s1[0]);
		else printf("%s", s1);
	}
	printf("@ptit.edu.vn\n");
}

int main(){
	char s[51];
	gets(s);
	chuanhoa(s);
	return 0;
}
