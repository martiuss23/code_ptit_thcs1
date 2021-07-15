#include <stdio.h>
#include <string.h>

struct dainhat{
	char a[15];
	int dai;
	int xh;
};

int main(){
	struct dainhat tu[5000];
	char a[15];
	int max=0, x=0, i, j;
	while(scanf("%s", &a)!=-1){
		int n=strlen(a);
		if(max<=n){
			if(max<n){
				max=n;
				x=0;
			}
			strcpy(tu[x].a,a);
			tu[x].xh=1;
			tu[x].dai=n;
			x++;
		}
	}
	for(i=0;i<x;i++)
		if(tu[i].xh==1)
			for(j=i+1;j<x;j++)
				if(strcmp(tu[i].a,tu[j].a)==0){
					tu[i].xh++;
					tu[j].xh=-1;
				}
	for(i=0;i<x;i++) if(tu[i].xh!=-1) 
	printf("%s %d %d\n", tu[i].a, tu[i].dai, tu[i]. xh);
	return 0;
}
