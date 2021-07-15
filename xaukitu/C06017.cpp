#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int  xep(char a[100][101], int x, int y){
	int i, lena=strlen(a[x]),lenb=strlen(a[y]), c, d;
	if(lena>lenb) lena=lenb;
	for(i=0;i<lena;i++){
		if(a[x][i]>a[y][i]) return 1;
	}
	return 0;
}

void sx(char a[100][101], int n){
	int i, j;
	for(i=0; i< n-1;i++){
		for(j=i+1;j<n;j++){
			if(xep(a, i ,j)==1){
				char x[101];
				strcpy(x,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j], x);
			}
		}
	}
}

int soSanh(char *a, char *b){
	int lena=strlen(a), lenb=strlen(b);
	if(lena!=lenb) return 0;
	int i;
	for(i=0;i<lena;i++)
		if(a[i]!= b[i]) return 0;//  = 0  thi khac; =1 thi giong
	return 1;
}

int ktxh(char a[100][101], char *token, int i){
	int j;
	for(j=0;j<i;j++)
		if(soSanh(a[j],token)==1)
			return 1; // da xuat hien
	return 0;// chua xuat hien
}

int main(){
	char s1[101], s2[101];
	gets(s1);
	scanf("\n");
	gets(s2);
	char *token;
	char x1[100][101], x2[100][101];
	int n1=0, n2=0, i, j, dd;
	token= strtok(s1, " ");
	while(token!=NULL){
		if(ktxh(x1,token,n1)==0){
			strcpy(x1[n1], token);
			n1++;
		}
		token=strtok(NULL, " ");
	}
	token = strtok(s2, " ");
	while(token!=NULL){
		if(ktxh(x2,token, n2)==0){
			strcpy(x2[n2], token);
			n2++;
		}
		token=strtok(NULL, " ");
	}
	sx(x1, n1);
	for(i=0;i<n1;i++){
		dd=0;
		for(j=0;j<n2;j++)
		if(strcmp(x1[i], x2[j])==0)
			dd=1;
		if(dd==0) printf("%s ", x1[i]);	
	}
	return 0;
}
