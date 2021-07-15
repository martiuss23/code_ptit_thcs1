#include <stdio.h>
#include <math.h>

int kt1cs(int n){
	if(n==2||n==3||n==5||n==7) return 1;
	return 0;
}

int ktxh(int arr[], int n, int x){//kiem tra cac so tai vi tri x da xua hien chua
	int i;
	for(i=x+1;i<=n;i++)
		if(arr[i]==arr[x]) return 0;
	return 1;
}

int main(){
	int n;
	scanf("%d", &n);
	int i=0, arr[9], j, t, dem;
	while(n>0){
		arr[i]=n%10;
		n/=10;
		i++;
	}
	for(j=i-1;j>=0;j--){
		dem=0;
		if(kt1cs(arr[j])==1 && ktxh(arr, i-1,j)==1){
			for(t=i-2;t>=0;t--)
				if(arr[j]==arr[t]) dem++;
			printf("%d %d\n", arr[j], dem);
		}
	}
	return 0;
}
