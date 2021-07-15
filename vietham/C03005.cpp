#include <stdio.h>
int ucln(int n, int m){
	while(n!=m){
		if(n>m)	n-=m;
		if(m>n)	m-=n;
	}
	return n;
}
int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int i, j;
	for(i=a;i<=b;i++){
		for(j=i+1;j<=b;j++)
			if(ucln(i,j)==1)
				printf("(%d,%d)\n", i, j);
	}
	return 0;
}
