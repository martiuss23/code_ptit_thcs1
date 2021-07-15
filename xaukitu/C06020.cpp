#include <stdio.h>
#include <string.h>
#include <ctype.h>

void ghep(char a[51]){
	int len=strlen(a), i,j;
	char b[50][51];
	for(i=0;i<len;i++) a[i]=tolower(a[i]);
	i=0;
	const char s[4]=" \t\n";
	char *token;
	token=strtok(a,s);
	while(token!=NULL){
		strcpy(b[i],token);
		token=strtok(NULL,s);
		i++;
	}
	strcpy(a,b[i-1]);
	for(j=0;j<i-1;j++){
		b[j][1]='\0';
		strcat(a,b[j]);
	}	
}

void dem(char a[50][51], int t){
	int i, j, dem, arr[51]={0};
	for(i=0;i<t;i++){
		if(arr[i]==0){
			arr[i]=1;
			dem=1;
			for(j=i+1;j<t;j++){
				if(strcmp(a[i],a[j])==0){
					dem++;
					arr[j]=dem;
				}
			}
		}
	}
	for(i=0;i<t;i++){
		printf("%s",a[i]);
		if(arr[i]>1) printf("%d", arr[i]);
		printf("@ptit.edu.vn\n");
	}
}


int main(){
	int t, i;
	char a[51], b[50][51];
	scanf("%d", &t);
	for(i=0;i<t;i++){
		scanf("\n");
		gets(a);
		ghep(a);
		strcpy(b[i],a);
	}
	dem(b,t);
	return 0;
}
