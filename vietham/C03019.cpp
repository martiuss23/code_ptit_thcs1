#include<stdio.h>

int kt(int n){
	int stn=0, sum=0, i=n;
	while(i>0){
		stn= stn*10+i%10;
		sum+=i%10;
		i/=10;
	}
	if(sum%10==0 && stn == n ) return 1;
	return 0;
}

int main(){
	int n, t;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		int i, dem=0, min=1, max;
		for(i=2;i<=n;i++)
			min*=10;
		max=min*10-1;
		for(i=min;i<=max;i++)
			if(kt(i)==1) dem++;
		printf("%d\n", dem);	
	}	
	return 0;
}
