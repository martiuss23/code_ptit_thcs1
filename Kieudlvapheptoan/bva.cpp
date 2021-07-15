#include<stdio.h>
void nhapmang(int a[], int *n)
{
  scanf("%d", n);
  for(int i=0;i<*n;i++)
  {
    scanf("%d",&a[i]);
  }
}
int xuatmang(int a[],int n)
 {
  for(int i=0;i<n;i++)
    {
      printf(" %4d ",a[i]);
    }
 }
int kiemtramangdoixung(int a[],int n)
{
 int co=1;
 for(int i=0;i<n/2;i++)
 {
 if(a[i]!=a[n-1-i]) co=0;
 }
 return co;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
 int a[100],n;
 nhapmang(a,&n);
 printf("%d\n", n);
 //xuatmang(a,n);
 if(kiemtramangdoixung(a,n)==0) printf("NO\n");
 else printf("YES\n");
    }
}
