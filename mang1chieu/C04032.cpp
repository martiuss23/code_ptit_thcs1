#include<stdio.h>

int kt(int n){
	int i=n%10;
	n/=10;
	while(n>0){
		if(i<n%10) return 0;
		i=n%10;
		n/=10;
	}
	return 1;
}

int tim(int *a, int n, int x){
	int i;
	for(i=0;i<n;i++){
		if(a[i]==x) return i;
	}
	return -1;
}

void sx(int *a, int *b, int m){
	int i, j;
	for(i=0;i<m-1;i++){
		for(j=m-1;j>i;j--){
			if(b[j]>b[j-1]){
				int tmp=a[j];
				a[j]=a[j-1];
				a[j-1]=tmp;
				tmp=b[j];
				b[j]=b[j-1];
				b[j-1]=tmp;
			}
		}
	}
}

void xuat(int *a, int *b , int m){
	int i;
	for(i=0;i<m;i++)
		printf("%d %d\n", a[i], b[i]);
}

int main(){
	int x, i=0, a[100000]={}, b[100000]={}, j;
	while(scanf("%d", &x)!=-1){
		if(kt(x)){
			int t = tim(a, i, x);
			if(t==-1){
				a[i]=x;
				b[i]++;
				i++;
			}
			else
				b[t]++;
		}		
	}
	sx(a,b,i);
	xuat(a,b,i);
	return 0;
}
