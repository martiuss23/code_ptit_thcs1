#include<stdio.h>
#include <math.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int i;
		double s, a, b, c, arr[10];
		for(i=0;i<6;i++)
		scanf("%lf", &arr[i]);
		c=sqrt((arr[0]-arr[2])*(arr[0]-arr[2])	+	(arr[1]-arr[3])*(arr[1]-arr[3]));
		b=sqrt((arr[0]-arr[4])*(arr[0]-arr[4])	+	(arr[1]-arr[5])*(arr[1]-arr[5]));
		a=sqrt((arr[2]-arr[4])*(arr[2]-arr[4])	+	(arr[3]-arr[5])*(arr[3]-arr[5]));
		if(a+b>c && b+c>a && a+c>b){
			s = sqrt((a+b+c)*(a+b-c)*(a-b+c)*(b+c-a))/4;
			printf("%.2lf\n", s);
		}
		else printf("INVALID\n");
	}
	return 0;
}
