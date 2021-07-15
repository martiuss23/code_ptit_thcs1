#include<stdio.h>
#include<string.h>
#include<ctype.h>

void chuanhoa(char s[]){
	char s1[81], b[80][81];
	s1[0]='\0';
	int n=0;
	char *token=strtok(s," ");
	for(int i=0;i<strlen(token);i++)
		token[i]=toupper(token[i]);
	strcpy(b[n++],token);
	token=strtok(NULL," ");
	while(token!=NULL){
		token[0]=toupper(token[0]);
		for(int i=1;i<strlen(token);i++) token[i]=tolower(token[i]);
		strcpy(b[n++],token);
		token=strtok(NULL," ");
	}
	for(int i=1;i<n;i++){
		strcat(s1,b[i]);
		if(i<n-1) strcat(s1," ");
		else strcat(s1, ", ");
	}
	strcat(s1,b[0]);
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
