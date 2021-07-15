#include<stdio.h>
#include<string.h>
char a[11][11];
int n;

void nhap(){
	scanf("%d", &n);
	char s[15];
	for(int i=0;i<n;i++){
		scanf("%s", &s);
		strcpy(a[i], s);
	}
}

void sx(){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			char t1[25], t2[25];
			strcpy(t1,a[i]);
			strcat(t1,a[j]);
			strcpy(t2,a[j]);
			strcat(t2,a[i]);
			if(strcmp(t1,t2)>0){
				char tmp[15];
				strcpy(tmp,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],tmp);
			}
		}
	}
}

void in(){
	char x[150];
	strcpy(x,a[0]);
	for(int i=1;i<n;i++) strcat(x,a[i]);
	printf("%s\n", x);
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		nhap();
		sx();
		in();
	}
	return 0;
}
