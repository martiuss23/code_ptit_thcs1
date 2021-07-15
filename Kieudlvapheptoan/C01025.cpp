#include <stdio.h>
#include <math.h>

int main(){
	int arr[8], i, hv=0;
	for(i=0;i<8;i++)
		scanf("%d", &arr[i]);
	int  maxX=arr[0], maxY=arr[1], minX=arr[0], minY=arr[1];
	//tim canh to nhat va nho nhat giua cac canh 1 3 cua 2 hinh
	for(i=2;i<8;i+=2){
		maxX = (maxX>arr[i])?maxX:arr[i];
		minX = (minX<arr[i])?minX:arr[i];
	}
	// tim canh to va nho nhat giua cac canh 2 4 cua 2 hinh
	for(i=3;i<8;i+=2){
		maxY = (maxY>arr[i])?maxY:arr[i];
		minY = (minY<arr[i])?minY:arr[i];
	}
	hv = (abs(maxX-minX)>abs(maxY-minY))?abs(maxX-minX)
	:abs(maxY-minY);
	printf("%d", hv*hv);
}
