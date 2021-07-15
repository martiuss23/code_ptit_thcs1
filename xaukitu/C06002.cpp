#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
	char s[101];
	gets(s);
	int i;
	for(i=0;i<strlen(s);i++) printf("%c", toupper(s[i]));
}
