#include<stdio.h>
#include <string.h>

struct pokemon{
	char ten[20];
	int dth, soda, soth;
};

void nhap(struct pokemon pkm[], int n){
	int i, tong=0, vt=0;
	for(i=0;i<n;i++){
		scanf("%s", &pkm[i].ten);
		scanf("%d %d", &pkm[i].dth, &pkm[i].soda);
	}
}

void kq(struct pokemon pkm[], int n){
	int i, tong=0, vt=0;
	for(i=0;i<n;i++){
		pkm[i].soth=0;
		while(pkm[i].soda>=pkm[i].dth){
			pkm[i].soda-=pkm[i].dth-2;
			pkm[i].soth++;
		}
		tong+=pkm[i].soth;
		if(pkm[vt].soth<pkm[i].soth)
		vt=i;
	}
	printf("%d\n%s", tong, pkm[vt].ten);
}

int main(){
	int n, tong=0, vt=0;
	scanf("%d", &n);
	struct pokemon pkm[1000];
	nhap(pkm,n);
	kq(pkm,n);
	return 0;
}
