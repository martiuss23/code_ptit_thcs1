#include<stdio.h>

void nhap(int arr[100][100], int a, int b){
	for(int i=0;i<a;i++)
	for(int j=0;j<b;j++)
	 scanf("%d", &arr[i][j]);
}

void sx(int arr[100][100], int a, int b){
	for(int i1=0;i1<a;i1++)
	for(int j1=0;j1<b;j1++)
	for(int i2=i1;i2<a;i2++)
	for(int j2=j1;j2<b;j2++){
		if(arr[i1][j1]>arr[i2][j2]){
			int tmp=arr[i1][j1];
			arr[i1][j1]=arr[i2][j2];
			arr[i2][j2]=tmp;
		}
	}
}

void in(int arr[100][100], int a, int b){
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++)
		printf("%d ", arr[i][j]);
		printf("\n");
	}
}

int main(){
	int t;
	scanf("%d", &t);
	for(int x=1;x<=t;x++){
		int arr[100][100], a, b;
		scanf("%d %d", &a, &b);
		nhap(arr,a,b);
		printf("Test %d:\n", x);
		sx(arr,a,b);
		in(arr,a,b);
	}
	
	return 0;
}
