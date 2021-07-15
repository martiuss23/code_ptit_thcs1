#include<stdio.h>
struct phanso{
	int ts, ms;
}ps1, ps2;

int ucln(int a, int b){
	while(b>0){
		int x=a%b;
		a=b;
		b=x;
	}
	return a;
}

void rutgon(int *ts, int *ms){
	int u1;
	u1=ucln(*ts,*ms);
	*ts/=u1;
	*ms/=u1;
}

void quydong(){
	int bc, bcnn, ucl;
	ucl=ucln(ps1.ms, ps2.ms);
	bc=ps1.ms*ps2.ms;
	bcnn=bc/ucl;
	ps1.ts*=(bcnn/ps1.ms);
	ps1.ms=bcnn;
	ps2.ts*=(bcnn/ps2.ms);
	ps2.ms=bcnn;
}

void tong(){
	struct phanso ps;
	ps.ts=ps1.ts+ps2.ts;
	ps.ms=ps1.ms;
	rutgon(&ps.ts, &ps.ms);
	printf("%d/%d\n", ps.ts, ps.ms);
}

void thuong(){
	struct phanso ps;
	ps.ts=ps1.ts*ps2.ms;
	ps.ms=ps1.ms*ps2.ts;
	rutgon(&ps.ts, &ps.ms);
	printf("%d/%d\n", ps.ts, ps.ms);
}

void run(){
	int t;
	scanf("%d", &t);
	for(int j=1;j<=t;j++){
		scanf("%d %d %d %d", &ps1.ts, &ps1.ms, &ps2.ts, &ps2.ms);
		printf("Case #%d:\n", j);
		rutgon(&ps1.ts, &ps1.ms);
		rutgon(&ps2.ts, &ps2.ms);
		quydong();
		printf("%d/%d %d/%d\n", ps1.ts, ps1.ms, ps2.ts, ps2.ms);
		tong();
		thuong();
	}
}

int main(){
	run();
	return 0;
}
