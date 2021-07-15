#include<stdio.h>

void xuly(int arr[], int n ){
	int dd[100000]={};
	for(int i=0;i<n;i++){
		if(dd[i]==0){
			dd[i]=1;
			for(int j=i+1;j<n;j++)
				if(arr[i]==arr[j]){
					dd[i]++;
					dd[j]=-1;
				}
		}
	}
	for(int i=0;i<n;i++) if(dd[i]!=-1)
		printf("%d xuat hien %d lan\n", arr[i], dd[i]);
}

void run(){
	int t, n, arr[100000];
	scanf("%d", &t);
	for(int x=1;x<=t;x++){
		scanf("%d", &n);
		for(int i=0;i<n;i++) scanf("%d", &arr[i]);
		printf("Test %d:\n", x);
		xuly(arr,n);
	}
}

int main(){
	run();
	return 0;
}
