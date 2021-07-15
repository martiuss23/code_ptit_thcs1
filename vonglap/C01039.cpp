#include <stdio.h>

int main(){
	int i, scs=0;
	scanf("%d", &i);
	while(i>0){
		i/=10;
		scs++;
	}
	printf("%d", scs);
	return 0;
}

//Cach 2
/*
#include <stdio.h>
#include <string.h>
int main(){
	char a[10];
	scanf("%s", &a);
	printf("%d", strlen(a));
	return 0;
}
*/
