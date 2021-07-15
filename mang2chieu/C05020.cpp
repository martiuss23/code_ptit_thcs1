#include <stdio.h>
#include<math.h>

void tao(int dem[], int n){
	dem[0]=0;
	dem[1]=1;
	for(int i=2;i<n*n;i++) dem[i]=dem[i-1]+dem[i-2];
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
	int dem[400], n;
	scanf("%d", &n);
	tao(dem,n);
	ve(n,dem);
	return 0;
}
