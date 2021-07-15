#include<stdio.h>
#include<string.h>
int n;
struct mathang{
	char ten[31], nhom[31];
	float giamua, giaban, ls;
	int ma;
}mh[100];

void create(){
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		mh[i].ma=i+1;
		scanf("\n");
		gets(mh[i].ten);
		scanf("\n");
		gets(mh[i].nhom);
		scanf("%f %f", &mh[i].giamua, &mh[i].giaban);
		mh[i].ls=mh[i].giaban-mh[i].giamua;
	}
}

void sort(){
	for(int i=0;i<n;i++)
	for(int j=n-1;j>i;j--)
		if(mh[j].ls>mh[j-1].ls){
			struct mathang tmp;
			tmp=mh[j];
			mh[j]=mh[j-1];
			mh[j-1]=tmp;
		}
}

void output(){
	for(int i=0;i<n;i++)
		printf("%d %s %s %.2f\n", mh[i].ma, mh[i].ten,
		mh[i].nhom, mh[i].ls);
}

void run(){
	create();
	sort();
	output();
}

int main(){
	run();
	return 0;
}
