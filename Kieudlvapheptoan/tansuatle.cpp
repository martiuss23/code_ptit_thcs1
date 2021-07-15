#include<stdio.h>

int main(){
	int t,  arr[100000], n;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		int dem[100000]={};
		for(int i=0;i<n;i++)
			scanf("%d", &arr[i]);
		for(int i=0;i<n;i++){
			if(dem[i]==0){
				dem[i]=1;
				for(int j=i+1;j<n;j++){
					if(arr[i]==arr[j]){
						dem[i]++;
						dem[j]=2;
					}
				}
			}
		}
		for(int i=0;i<n;i++) 
		if(dem[i]%2!=0){
			printf("%d\n",arr[i]);
			break;
		}
	}
	
	return 0;
}
