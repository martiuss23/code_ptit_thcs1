#include<stdio.h>

void nhap(int arr[], int n){
	for(int i=0;i<n;i++) scanf("%d", &arr[i]);
}

void kt(int arr1[], int arr2[], int arr3[], int n1, int n2, int n3){
	int kq[100000], i=0, i1, i2, i3;
	for(i1=0;i1<n1;i1++){
		for(i2=0;i2<n2;i2++)
			if(arr1[i1]==arr2[i2])
				for(i3=0;i3<n3;i3++){
					if(arr2[i2]==arr3[i3]){
						kq[i++]=arr3[i3];
						arr1[i1]=-1;
						arr2[i2]=-2;
						arr3[i3]=-3;
						break;
					}
				}
					
	}
	if(i==0) printf("NO");
	else
	for(int j=0;j<i;j++) printf("%d ", kq[j]);
	printf("\n");
}

int main(){
	int t, arr1[100000], arr2[100000], arr3[100000], n1, n2, n3;
	scanf("%d", &t);
	while(t--){
		scanf("%d%d%d", &n1, &n2, &n3);
		nhap(arr1,n1);
		nhap(arr2,n2);
		nhap(arr3,n3);
		if(n1<=n2&&n1<=n3){
			if(n2<=n3) kt(arr1,arr2,arr3,n1,n2,n3);
			else kt(arr1,arr3,arr2,n1,n3,n2);
		}
		else if(n2<=n1&&n2<=n3){
			if(n1<=n3) kt(arr2,arr1,arr3,n2,n1,n3);
			else kt(arr2,arr3,arr1,n2,n3,n1);
		}
		else{
			if(n2<=n1) kt(arr3,arr2,arr1,n3,n2,n1);
			else kt(arr3,arr1,arr2,n3,n1,n2);
		} 
	}
	return 0;
}
