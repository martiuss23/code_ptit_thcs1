#include <stdio.h>
#include <string.h>

int kttang(char *a){
	int i, len = strlen(a);
	char b = a[len-6];
	for(i=len-5;i<len;i++){
		if(a[i]=='.')	continue;
		if(a[i]<=b) return 0;
		b=a[i];
	}
	return 1;
}

int ktnguquy(char *a){
	int i, len=strlen(a);
	for(i=len-6;i<len-1;i++){
		if(a[i]=='.'){
			a[i]=a[i-1];
			continue;
		} 
		if(a[i]!=a[i+1]) return 0;
	}
	return 1;
}

int kt32(char *a){
	int i, len=strlen(a);
	for(i=len-6;i<len-4;i++)
		if(a[i]!=a[i+1]) return 0;
		if(a[10]!=a[11]) return 0;
	return 1;
}

int ktlocphat(char *a){
	int i, len =strlen(a);
	for(i=len-6;i<len;i++){
		if(a[i]=='.') continue;
		if(a[i]!='6'&&a[i]!='8') return 0;
	}		
	return 1;
}

int ktBienSo(char *a){
	int len = strlen(a);
	if(a[0]>'9'||a[0]<'0') return 0;
	if(a[1]>'9'||a[1]<'0') return 0;
	if(a[2]!='-') return 0;
	if(a[3]>'Z'||a[3]<'A') return 0;
	if(a[4]>'9'||a[4]<'0') return 0;
	if(a[len-6]=='6'||a[len-6]=='8'){
		if(ktlocphat(a)) return 1;
		if(kt32(a)) return 1;
		if(ktnguquy(a)) return 1;
	}
	else if(a[len-6]>'5'&&a[len-6]<='9'){
		if(kt32(a)) return 1;
		if(ktnguquy(a)) return 1;
	}
	else{
		if(kttang(a)) return 1;
		if(kt32(a)) return 1;
		if(ktnguquy(a)) return 1;
	}
	return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char a[13];
		scanf("\n");
		gets(a);
		printf(ktBienSo(a)?"YES\n":"NO\n");
	}
	return 0;
}
