#include<stdio.h>
#include<math.h>

int ktnt(int a){
	if(a==2) return 1;
	if(a<2||a%2==0) return 0;
	for(int i=3; i<=sqrt(a);i+=2) 
	if(a%i==0) return 0;
	return 1;
}

void sx(int arr[], int n){
	for(int i=0;i<n;i++)
	for(int j=n-1;j>i;j--)
		if(arr[j]<arr[j-1]){
			int tmp=arr[j];
			arr[j]=arr[j-1];
			arr[j-1]=tmp;
		}
}

void xuly(int arr[], int n ){
	int dd[100000]={};
	for(int i=0;i<n;i++){
		if(dd[i]==0&&ktnt(arr[i])){
			dd[i]=1;
			for(int j=i+1;j<n;j++)
				if(arr[i]==arr[j]){
					dd[i]++;
					dd[j]=-1;
				}
		}
		else dd[i]=-1;
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
		sx(arr,n);
		printf("Test %d:\n", x);
		xuly(arr,n);
	}
}

int main(){
	run();
	return 0;
}
