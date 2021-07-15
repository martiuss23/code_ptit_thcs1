#include<stdio.h>

//bai nay tu duy hoi roi , them nua tuy ac roi nhung co the bi sai voi test kieu nay
//3 1
//3 1
//3 1
//khuyen cao khong nen dung cach nay
void doicho(int *a, int *b){
	int tmp=*a;
	*a=*b;
	*b=tmp;
}

void sx(int arr[3][2]){
	int i;
	for(i=0;i<=2;i++)
		if(arr[i][0]<arr[i][1])
		doicho(&arr[i][0],&arr[i][1]);
	for(i=1;i<=2;i++)
		if(arr[0][0]<arr[i][0]){
		 	doicho(&arr[i][0],&arr[0][0]);
		 	doicho(&arr[i][1],&arr[0][1]);
		}
}

int kt(int arr[3][2]){
	int i;
	for(i=1;i<=2;i++){
		if(arr[0][1]+arr[i][1]==arr[0][0])
		continue;
		else if(arr[0][1]+arr[i][0]==arr[0][0]){
			doicho(&arr[i][0], &arr[i][1]);
		}
		else return 0;
	}
	if(arr[1][0]+arr[2][0]!=arr[0][0]) return 0;
	return 1;
}

int main(){
	int arr[3][2], i, j;
	for(i=0;i<3;i++)
	for(j=0;j<2;j++)
		scanf("%d", &arr[i][j]);
	sx(arr);
	printf(kt(arr)?"YES":"NO");
	return 0;
}
