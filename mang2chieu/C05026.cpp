#include <stdio.h>
#include <math.h>

int ktnt(int n){
	if(n==2||n==5) return 1;
	if(n<2||n%2==0||n%5==0) return 0;
	int i;
	for(i=3;i<=sqrt(n);i+=2){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	int n;
	scanf("%d", &n);
	int i=0, arr[n+1][n+1], j, dem=0, t;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d", &arr[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(ktnt(arr[i][j])==1) dem++;
		}
		arr[i][n]=dem;
		dem=0;
	}
	t=0;
	for(i=1;i<n;i++){
		t=(arr[t][n]>=arr[i][n])?t:i;
	}
	printf("%d\n", t+1);
	for(j=0;j<n;j++){
		if(ktnt(arr[t][j])==1) printf("%d ", arr[t][j]);
	}
	return 0;
}
