#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n], i, j, t, min=0;
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	for(i=0;i<n-1;i++){
		t=i+1;
		for(j=i+2;j<n;j++)
			t=(a[t]>a[j])?j:t;
		if(a[i]>a[t]){
			int tmp=a[i];
			a[i]=a[t];
			a[t]=tmp;
		}
		printf("Buoc %d: ", i+1);
		for(j=0;j<n;j++) printf("%d ", a[j]);
		printf("\n");
	}
	return 0;
}
