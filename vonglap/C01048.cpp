#include <stdio.h>

int main(){
	int i, soChan=0, soLe=0;
	scanf("%d", &i);
	while(i>0){
		if((i%10)%2==0) soChan++;
		else soLe++;
		i/=10;	
	}
	printf("%d %d", soLe, soChan);
	return 0;
}
