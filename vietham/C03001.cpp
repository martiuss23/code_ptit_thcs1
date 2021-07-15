#include <stdio.h>

int kt(int a){
	int sUm=0;
	while(a>0){
		sUm+=a%10;
		a/=10;
	}
	if(sUm%10==0) return 1;
	else return 0;
}

int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		int a;
		scanf("%d", &a);
		printf(kt(a)?"YES\n":"NO\n");
	}
	return 0;
}
