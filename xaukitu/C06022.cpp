#include <stdio.h>
#include <string.h>
#include <math.h>

int soSanh(char a[200][201],char *b, int x){
	int i, len1=strlen(a[x]), len2=strlen(b);
	if(len1!=len2) return 0; // khac nhau
	for(i=0;i<len1;i++)
		if(abs(a[x][i]-b[i])!=32&&abs(a[x][i]-b[i])!=0) return 0;
	return 1;
}

void kt(char a[200][201], char b[21], int x[201],int n){
	int i;
	for(i=0;i<n;i++){
		if(x[i]==0)
			if(soSanh(a,b,i)==1)
				x[i]=-1;
	}
}

int main(){
	int t, j;
	scanf("%d", &t);
	for(j=1;j<=t;j++){
		scanf("\n");
		char s1[201], s2[21], x[200][201];
		gets(s1);
		scanf("\n");
		gets(s2);
		int n=0, i, arr[200]={0};
		char *token;
		token=strtok(s1," ");
		while(token!=NULL){
			strcpy(x[n],token);
			n++;
			token=strtok(NULL," ");
		}
		kt(x,s2,arr,n);
		printf("Test %d: ", j);
		for(i=0;i<n;i++)
			if(arr[i]!=-1) printf("%s ", x[i]);
		printf("\n");
	}
	return 0;
}
