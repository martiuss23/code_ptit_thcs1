#include <stdio.h>
#include <math.h>
int main(){
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	float delta, x1, x2;
	delta=b*b-4*a*c;
	if(delta>=0){
		x1=(-b+sqrt(delta))/(2*a);
		x2=(-b-sqrt(delta))/(2*a);
		if(x1==x2) printf("%.2f", x1);
		else printf("%.2f %.2f", x1, x2);
	}
	else printf("NO");
	return 0;
}
