#include <stdio.h>
#include <math.h>

int ktnt(int a){
	if(a==2) return 1;
	if(a%2==0||a<2) return 0;
	int i;
	for(i=3;i<=sqrt(a);i+=2)
		if(a%i==0) return 0;
	return 1;
}

int main(){
	int a, i;
	scanf("%d", &a);
	for(i=2;i<=a;i++)
		if(ktnt(i)) printf("%d\n", i);
	return 0;
}
