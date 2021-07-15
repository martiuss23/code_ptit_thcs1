#include <stdio.h>
#include <math.h>

int ktnt(int a){
	if(a==2) return 1;
	if(a%2==0||a<2) return 0;
	int i;
	for(i=3;i<=sqrt(a);i+=2)
		if(a%i==0) return 0;
	return 1;
}

int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		int a;
		scanf("%d", &a);
		printf(ktnt(a)?"YES\n":"NO\n");
	}
	return 0;
}
