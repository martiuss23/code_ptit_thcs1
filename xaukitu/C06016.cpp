#include <stdio.h>
#include <string.h>

int main(){
	char s1[100], s2[100];
	gets(s1);
	gets(s2);
	int i, j;
	scanf("%d", &i);
	for(j=0;j<(strlen(s1)+strlen(s2));j++){
		if(j<i-1) printf("%c", s1[j]);
		else if(j>=i-1&&j<i-1+strlen(s2))
		printf("%c", s2[j-i+1]);
		else printf("%c", s1[j-strlen(s2)]);
	}
	return 0;
}
