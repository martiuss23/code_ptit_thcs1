#include <stdio.h>

int ucln(int a,int b){
	while(a!=b){
	   if(a>b)	a=a-b;
	   if(b>a)	b=b-a;
	}
	return a;
}

long long bcnn(int  a,int b){
	long long bc = (long long)a*b/ucln(a,b);
	return bc;
}

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d\n%lld", ucln(a,b), bcnn(a,b));
	return 0;
}
