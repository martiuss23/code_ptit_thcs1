#include<stdio.h>
#include<string.h>
#include<ctype.h>

void chuanhoa(char s[]){
	char s1[81];
	s1[0]='\0';
	char *token=strtok(s," ");
	while(token!=NULL){
		token[0]=toupper(token[0]);
		for(int i=1;i<strlen(token);i++) token[i]=tolower(token[i]);
		strcat(s1,token);
		token=strtok(NULL," ");
		if(token!=NULL)
		strcat(s1," ");
	}
	printf("%s\n", s1);
}

void run(){
	int t;
	char s[81];
	scanf("%d", &t);
	while(t--){
		scanf("\n");
		gets(s);
		chuanhoa(s);
	}
}

int main(){
	run();
	return 0;
}
