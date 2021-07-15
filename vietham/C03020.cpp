#include <stdio.h>

int kt(int n){
	int i=n, kt6=0, tn=0, sum=0;
	while(i>0){
		tn=10*tn+i%10;
		if((i%10)==6) kt6=1;
		sum+=i%10;
		i/=10;
	}
	if(tn==n && kt6==1 && sum%10==8) return 1;
	return 0;
}

int main(){
	int a, b, i;
	scanf("%d%d", &a, &b);
	if(a>b){
		int tmp=a;
		a=b;
		b=tmp;
	}
	for(i=a;i<=b;i++)
		if(kt(i)==1) printf("%d ", i);
	return 0;
}
