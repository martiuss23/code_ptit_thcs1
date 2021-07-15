#include <stdio.h>
#include<math.h>

int ktnt(int n){
	if(n==2) return 1;
	if(n<2||n%2==0) return 0;
	int i;
	for(i=3;i<=sqrt(n);i+=2){
		if(n%i==0) return 0;
	}
	return 1;
}

void tao(int dem[], int n){
	dem[0]=2;
	int dd=1, tt=3;
	while(dd<n*n){
		if(ktnt(tt)) dem[dd++]=tt;;
		tt+=2;
	}
}

void in(int arr[100][100], int n){
	int i, j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++) printf("%d ", arr[i][j]);
		printf("\n");
	}	
}

void ve(int n, int  dem[]){
	int x=0, arr[100][100], i, j, a=0;
	while(x<=n/2){
		for(i=x;i<n-x;i++){
			if(a==n*n) break;
			arr[x][i]=dem[a++];
		} 
		for(i=x+1;i<n-x;i++){
			if(a==n*n) break;
			arr[i][n-1-x]=dem[a++];
		} 
		for(i=n-x-2;i>=x;i--){
			if(a==n*n) break;
			arr[n-x-1][i]=dem[a++];
		} 
		for(i=n-x-2;i>x;i--){
			if(a==n*n) break;
			arr[i][x]=dem[a++];
		} 
		x++;
		if(a==n*n) break;;
	}
	in(arr,n);
}

int main(){
	int n, t;
	scanf("%d", &t);
	for(int i=1;i<=t;i++){
		int dem[400];
		scanf("%d", &n);
		tao(dem,n);
		printf("Test %d:\n", i);
		ve(n,dem);
	} 
	return 0;
}
