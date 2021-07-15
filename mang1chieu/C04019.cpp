#include <stdio.h>

int kt(int a[], int m){
	int i;
	for(i=0;i<m;i++){
		if(a[i]==a[m]) return 0; 
	}
	return 1;
}

int dem(int a[], int n, int m){
	int i, dem1=1;
	for(i=m+1;i<n;i++)
		if(a[m]==a[i])	dem1++;
	return dem1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n], i;
		for(i=0;i<n;i++) scanf("%d", &a[i]);
		int max=dem(a,n,0);
		for(i=1;i<n;i++){
			if(kt(a,i)==1)
			max=(max>dem(a,n,i))?max:dem(a,n,i);
		}
		if(max==1) for(i=0;i<n;i++)
			 printf("%d ", a[i]);
		else 
		    for(i=0;i<n;i++){
				if(dem(a,n,i)==max)
				printf("%d ", a[i]);
			}
		printf("\n");
	}	
	return 0;
}
