#include <stdio.h>
#include <math.h>

struct tamgiac{
	float vt[6], c1, c2, c3, P;
}tg;

void input(){
	for(int i=0;i<6;i++)
		scanf("%f", &tg.vt[i]);
}

void solve(){
	tg.c1=sqrt((tg.vt[0]-tg.vt[2])*(tg.vt[0]-tg.vt[2])+
	(tg.vt[1]-tg.vt[3])*(tg.vt[1]-tg.vt[3]));
	tg.c2=sqrt((tg.vt[0]-tg.vt[4])*(tg.vt[0]-tg.vt[4])+
	(tg.vt[1]-tg.vt[5])*(tg.vt[1]-tg.vt[5]));
	tg.c3=sqrt((tg.vt[4]-tg.vt[2])*(tg.vt[4]-tg.vt[2])+
	(tg.vt[5]-tg.vt[3])*(tg.vt[5]-tg.vt[3]));
	tg.P=tg.c1+tg.c2+tg.c3;
}

void output(){
	if(tg.c1<tg.c2+tg.c3 && tg.c2<tg.c1+tg.c3 &&tg.c3<tg.c1+tg.c2) 
	printf("%.3f\n", tg.P);
	else printf("INVALID\n");
}

void run(){
	int t;
	scanf("%d", &t);
	while(t--){
		input();
		solve();
		output();
	}
}

int main(){
	run();
	return 0;
}
