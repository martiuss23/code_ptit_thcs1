#include <stdio.h>
#include <math.h>
int main(){
	int a;
	scanf("%d", &a);
	while(a--){
		int n, i, dem=0;
		scanf("%d", &n);
		if(n%2!=0) printf("0\n");
		else{
			int t=sqrt(n);
			if(t*t==n && t%2==0) dem++;
			for(i=1;i<sqrt(n);i++){
				if(n%i==0){
					if(i%2==0) dem++;
					if((n/i) %2==0) dem++;
				}
			}
			printf("%d\n", dem);	
		}	
	}
	return 0;
}
