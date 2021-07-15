#include <stdio.h>
#include <string.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char a[21];
		int i, dem=0;
		scanf("%s", &a);
		for(i=0;i<strlen(a)/2;i++){
			if(a[i]!=a[strlen(a)-1-i]) dem++;
		}
		if((strlen(a)%2!=0 && dem==0) || dem==1)
		printf("YES\n");
		else printf("NO\n");	
	}
	return 0;
}
