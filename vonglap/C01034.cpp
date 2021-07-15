#include <stdio.h>
#include <math.h>

int ktcp(int n){
	int x = sqrt(n);
	if(x*x==n) return 1;
	return 0;
}

int main(){
	int a, b, i, m, n;
	scanf("%d%d", &a, &b);
	if(ktcp(a)==1)  m=sqrt(a);
	else m=sqrt(a)+1;
    n=sqrt(b);
    printf("%d\n",n-m+1);
	for(i=m;i<=n;i++)
		printf("%d\n", i*i);
	return 0;
}
