#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n], i, j, x=1, t;
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
		printf("Buoc %d: ", x);
		x++;
		for(t=0;t<n;t++) printf("%d ", a[t]);
		printf("\n");
	}
	return 0;
}
