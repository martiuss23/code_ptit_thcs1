#include<stdio.h>

int main(){
	int n, a;
	scanf("%d", &a);
	while(a--){
		scanf("%d", &n);
		int arr[10]={1,2,5,10,20,
		50,100,200,500,1000}, i, soto=0;
		for(i=9;i>=0;i--){
			soto+=n/arr[i];
			n=n-(n/arr[i])*arr[i];
		}
		printf("%d\n", soto);
	}	
	return 0;
}
