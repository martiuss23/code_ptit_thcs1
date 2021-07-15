#include <stdio.h>

int main(){
	int t, x, n;
	scanf("%d", &t);
	for(x=1;x<=t;x++){
		scanf("%d", &n);
		int arr[n+1], i, j=0, b[n], dem=0, max;
		for(i=0;i<n;i++)
		scanf("%d", &arr[i]);
		arr[n]=arr[n-1]-1;
		for(i=0;i<n;i++){
			dem++;
			if(arr[i]>=arr[i+1]){
				b[j]=dem;
				j++;
				dem=0;
			}
		}
		max=1;
		for(i=0;i<j;i++)
		max=(max>b[i])?max:b[i];
		printf("Test %d:\n%d\n", x, max);
		dem=1;
		for(i=0;i<n;i++){
			if(arr[i]<arr[i+1])	dem++;
			else {
				if(dem==max){
					for(j=i-dem+1;j<=i;j++)
						printf("%d ", arr[j]);
					printf("\n");
				}
				dem=1;
			}
		}
	}
	return 0;
}
