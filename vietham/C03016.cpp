#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long fn=0, f=1, n;
		scanf("%lld", &n);
		while(fn<n){
			fn=fn+f;
			f=fn-f;
		}
		if(fn==n) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
