#include<stdio.h>
#include<string.h>

struct thisinh{
	char ten[31];
	char ngaysinh[11];
	float d1, d2, d3, diem;
};

int main(){
	int n, i;
	scanf("%d", &n);
	struct thisinh ts[n];
	float max;
	for(i=0;i<n;i++){
		scanf("\n");
		gets(ts[i].ten);
		scanf("%s", &ts[i].ngaysinh);
		scanf("%f%f%f", &ts[i].d1, &ts[i].d2, &ts[i].d3);
		ts[i].diem=ts[i].d1+ts[i].d2+ts[i].d3;
	}
	max=ts[0].diem;
	for(i=0;i<n;i++)
		max=(max<ts[i].diem)?ts[i].diem:max;
	for(i=0;i<n;i++)
		if(ts[i].diem==max)
		printf("%d %s %s %.1f\n", i+1, ts[i].ten, ts[i].ngaysinh, ts[i].diem);
	return 0;
}
