#include<stdio.h>
#include<string.h>

int main(){
	int t;
	char s[201];
	scanf("%d", &t);
	while(t--){
		int dem=0;
		scanf("\n");
		gets(s);
		char *token=strtok(s," ");
		while(token!=NULL){
			dem++;
			token=strtok(NULL," ");
		}
		printf("%d\n", dem);
	}
	return 0;
}
