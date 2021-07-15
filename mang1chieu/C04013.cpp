#include <stdio.h>


int main() {
	int n, i, j, t, dem=0;
	scanf("%d", &n);
	int arr[n], b[n];
	for(i=0;i<n;i++)
		scanf("%d", &arr[i]);
	i=0;
	while(i<n){
		t=1;
		for(j=0;j<n;j++){
			if(i!=j)
				if(arr[i]==arr[j]){
					t=0;
					break;
				}
		}
		if(t==1){
			b[dem]=arr[i];
			dem++;
		} 
		i++;
	}
	printf("%d\n", dem);
	for(t=0;t<dem;t++)
		printf("%d ", b[t]);
	return 0;
}
