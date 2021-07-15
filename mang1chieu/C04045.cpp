#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int tach(char a[], int pt[200]){
	char *token;
	token=strtok(a," ");
	int i=0;
	while(token!=NULL){
		pt[i]=atoi(token);
		i++;
		token=strtok(NULL," ");
	}
	return i;
}

int kt(int pt[], int sopt){
	int chan=0, le=0, i;
	for(i=0;i<sopt;i++){
		if(pt[i]%2==0) chan++;
		else le++;
	}
	if(chan>le&&sopt%2==0) return 1;
	if(le>chan&&sopt%2!=0) return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d\n", &t);
	while(t--){
		char a[1501];
		gets(a);
		int pt[200];
		int sopt=tach(a,pt);
		printf(kt(pt,sopt)?"YES\n":"NO\n");
	}
	return 0;
}
