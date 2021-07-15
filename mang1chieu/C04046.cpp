#include <stdio.h>
#include <math.h>
void doi(long long *a, long long *b){
    long long tmp = *a;
    *a = *b;
    *b = tmp;
}

void qs(long long a[], int l, int r){
    int i = l, j = r;
    long long pivot = a[(i+j)/2];
    while (i<=j){
        while (a[i]<pivot)
            i++;
        while (a[j]>pivot)
            j--;
        if (i<=j){
            doi(&a[i],&a[j]);
            i++;
            j--;
        }
    }
    if(l<j)
        qs(a,l,j);
    if(r>i)
        qs(a,i,r);
}

void kq(){
    int n;
    scanf("%d",&n);
    long long x[n];
    for (int i=0;i<n;i++)
        scanf("%lld", &x[i]);
    qs(x,0,n-1);
    long long min = 1000000009;
    int a = 0;
    for(int i=1;i<n;i++){
        long long tmp = x[i]-x[i-1];
        if (tmp<min)
            min=tmp;
    }
    for(int i=1;i<n;i++){
        long long tmp=x[i]-x[i-1];
        if (tmp==min)
            a++;
    }
    printf("%lld %d\n", min, a);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
		kq();
	}
   	return 0;    
}
