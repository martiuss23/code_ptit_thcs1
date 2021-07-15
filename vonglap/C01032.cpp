#include <stdio.h>
#include <math.h>

void xuLy(int n){
	int i, tich=1;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0) tich*=i;
		while(n%i==0)
			n/=i;
	}
	if(n>1) tich*=n;
	printf("%d\n", tich);
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		xuLy(n);
	}
	return 0;
}
