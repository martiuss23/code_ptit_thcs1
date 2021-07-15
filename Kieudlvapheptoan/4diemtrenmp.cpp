#include<stdio.h>
struct diem{
	int x, y, z;
};


void nhap(struct diem d[], struct diem vt[]){
	for(int i=0;i<4;i++){
		scanf("%d%d%d", &d[i].x,&d[i].y, &d[i].z);
	}
	for(int i=0;i<3;i++){
		vt[i].x=d[0].x-d[i+1].x;
		vt[i].y=d[0].y-d[i+1].y;
		vt[i].z=d[0].z-d[i+1].z;
	}
}

void kq(struct diem vt[]){
	struct diem a;
	a.x=vt[0].y*vt[1].z-vt[1].y*vt[0].z;
	a.y=-(vt[0].x*vt[1].z-vt[1].x*vt[0].z);
	a.z=vt[0].x*vt[1].y-vt[1].x*vt[0].y;
	int kq=a.x*vt[2].x+a.y*vt[2].y+a.z*vt[2].z;
	if(kq==0) printf("YES\n");
	else printf("NO\n");
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		struct diem d[4], vt[3];
		nhap(d,vt);
		kq(vt);
	}
	return 0;
}
