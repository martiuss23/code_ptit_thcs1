#include<stdio.h>
#include<string.h>

int main(){
	char s[51];
	scanf("%s", &s);
	int dd[51], kq=1;
	for(int i=0;i<strlen(s);i++){
		dd[i]=1;
		for(int j=0;j<i;j++){
			if(s[j]<s[i]){
				dd[i]=(dd[i]>dd[j]+1)?dd[i]:dd[j]+1;
			}
		}
		kq=(kq>dd[i])?kq:dd[i];
	}
	printf("%d", 26-kq);
	return 0;
}
