#include <stdio.h>

int ucln(int a,int b){
	if(a==1||b==1) return 1;
	while(a!=b){
		if(a>b) a-=b;
		if(b>a) b-=a;
	}
	return a;
}

long long bcnn(int a,int b){
	long long bc = (long long)a*b/(ucln(a,b));
	return bc;
}

int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		int a, b;
		scanf("%d%d", &a, &b);
		printf("%lld %d\n", bcnn(a,b), ucln(a,b));
	}
	return 0;
}
