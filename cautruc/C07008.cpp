#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char s1[100], s2[100];

struct dathuc{
	int heso[10001], max, dem;
}dt;

void tach(char s[]){
	char *token;
	const char x[6]="*x^ +";
	token=strtok(s,x);
	while(token!=NULL){
		int hs=atoi(token);
		token=strtok(NULL,x);
		int mu=atoi(token);
		if(dt.heso[mu]==0)	dt.dem++;
		dt.heso[mu]+=hs;
		if(dt.max<mu) dt.max=mu;
		token=strtok(NULL,x);
	}
}

void input(){
	gets(s1);
	scanf("\n");
	gets(s2);
	for(int i=0;i<100;i++) dt.heso[i]=0;
	dt.max=0;
	dt.dem=0;
}

void output(){
	for(int i=dt.max;i>=0;i--){
		if(dt.heso[i]>0){
			printf("%d*x^%d", dt.heso[i], i);
			dt.dem--;
			if(dt.dem==0) break;
			printf(" + ");
		}
	}
	printf("\n");
}

void run(){
	int t;
	scanf("%d\n", &t);
	while(t--){
		input();
		tach(s1);
		tach(s2);
		output();
	}
}

int main(){
	run();
	return 0;
}
