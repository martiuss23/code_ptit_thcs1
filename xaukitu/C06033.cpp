#include<stdio.h>
#include<string.h>

int vt(char s1[], char s2[], char s[]){
	int i, n=strlen(s1), b=1;
	for(b=1;b<=2*n;b++){
		char s12[402];
		int j=0;
		for(i=0;i<n;i++){
			s12[j++]=s2[i];
			s12[j++]=s1[i];
			s12[j]='\0';
		}
		if(strcmp(s,s12)==0) return b;
		for(i=0;i<n;i++){
			s1[i]=s12[i];
			s2[i]=s12[i+n];
		}
	}
	return -1;
}

int main(){
	int n;
	scanf("%d", &n);
	while(n){
		char s1[201], s2[201], s12[402], s[402];
		scanf("%s%s%s", &s1, &s2, &s);
		printf("%d\n",vt(s1,s2,s));
		scanf("%d", &n);
	}
	return 0;
}
