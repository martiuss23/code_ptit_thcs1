#include<stdio.h>
#include<string.h>

char lm[8]="IVXLCDM";
int tp[7]={1,5,10,50,100,500,1000};

int gt(char c){
	for(int i=0;i<7;i++)
		if(lm[i]==c) return tp[i]; 
}

void kq(char X[]){
	int i, n=strlen(X), sum=gt(X[n-1]);
	for(i=n-1;i>0;i--){
		if(gt(X[i])>gt(X[i-1]))	sum-=gt(X[i-1]);
		else sum+=gt(X[i-1]);
	}
	printf("%d\n", sum);
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char X[101];
		scanf("%s", &X);
		kq(X);
	}
	return 0;
}
