#include <stdio.h>

void nhapMang(int *arr, int n){
	int i;
	for(i=0;i<n;i++)
		scanf("%d", &arr[i]);
}
int main(){
	int a;
	scanf("%d", &a);
	int j=1;
	while(j<=a){
		int N, M, p, i;
		scanf("%d%d%d", &N, &M, &p);
		int arr[N], brr[M];
		nhapMang(arr, N);
		nhapMang(brr, M);
		int c[N+M];
		for(i=0;i<N+M;i++){
			if(i<p) c[i] = arr[i];
			else if(i>=p&&i<p+M)
				c[i]=brr[i-p];
			else
				c[i]=arr[i-M];
		}
		printf("Test %d:\n", j);
		for(i=0;i<N+M;i++)
			printf("%d ", c[i]);
		printf("\n");
		j++;
	}
	return 0;
}
