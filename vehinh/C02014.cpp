#include<stdio.h>

void ve(int n){
	int i, j, b=0, x=n, arr[100][100], a=2*n-1;
	while(b<n){
		for(i=b;i<a-b;i++) arr[b][i]=x;
		for(i=b+1;i<a-b;i++) arr[i][a-b-1]=x;
		for(i=a-b-2;i>=b;i--) arr[a-b-1][i]=x;
		for(i=a-b-2;i>b;i--) arr[i][b]=x;
		x--;
		b++;
	}
	for(i=0;i<a;i++){
		for(j=0;j<a;j++) printf("%d", arr[i][j]);
		printf("\n");
	}
}

int main(){
	int n;
	scanf("%d", &n);
	ve(n);
	return 0;
}
