#include<stdio.h>
#include<math.h>
struct sinhvien{
	char name[25], ns[11];
	int msv;
	float m1, m2, m3, sum;
}sv[100];
int n;


void input(){
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("\n");
		sv[i].msv=i+1;
		gets(sv[i].name);
		scanf("%s", &sv[i].ns);
		scanf("%f%f%f", &sv[i].m1, &sv[i].m2, &sv[i].m3);
		sv[i].sum=sv[i].m1+sv[i].m2+sv[i].m3;
	}	
}

void bubblesort(){
	for(int i=0;i<n;i++){
		for(int j=n-1;j>i;j--){
			if(sv[j].sum>sv[j-1].sum){
				struct sinhvien tmp=sv[j];
				sv[j]=sv[j-1];
				sv[j-1]=tmp;
			}
		}
	}
}

void output(){
	for(int i=0;i<n;i++){
		printf("%d %s %s %.1f\n", sv[i].msv, sv[i].name, sv[i].ns, sv[i].sum);
	}
}

void run(){
	input();
	bubblesort();
	output();
}

int main(){
	run();
	return  0;
}
