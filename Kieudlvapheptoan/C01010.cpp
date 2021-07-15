#include <stdio.h>

int main(){
	int ngay;
	scanf("%d", &ngay);
	int nam, tuan;
	nam=ngay/365;
	ngay-=nam*365;
	tuan=ngay/7;
	ngay-=tuan*7;
	printf("%d %d %d", nam, tuan, ngay);
	return 0;
}
