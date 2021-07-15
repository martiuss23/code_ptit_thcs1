#include<stdio.h>
#include<string.h>
#include<ctype.h>
char kq[1000][35];
int n=0, dd[1000]={}, max=0;

int kttn(char s[]){
	int m=strlen(s);
	for(int i=0;i<m/2;i++)
		if(s[i]!=s[m-i-1]) return 0;
	return 1;
}

int xh(char s[]){
	for(int i=0;i<n;i++)
		if(strcmp(s,kq[i])==0) return i;
	return n;
}

void kt(char s[]){
	if(kttn(s)){
		int x=xh(s);
		if(x<n) dd[x]++;
		else{
			if(max<strlen(s)) max=strlen(s);
			strcpy(kq[n],s);
			dd[n++]++;
		}
	}
}

void output(){
	for(int i=0;i<n;i++) if(strlen(kq[i])==max)
	printf("%s %d\n", kq[i], dd[i]);
}

void run(){
	char s[35];
	while(scanf("%s", &s)!=-1){
		kt(s);
	}
	output();
}

int main(){
	run();
	return 0;
}
