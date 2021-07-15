#include <stdio.h>

int main(){
	int cd, cr;
	scanf("%d %d", &cd, &cr);
	if(cd<=0 || cr<=0) printf("0");
	else printf("%d %d", (cd+cr)*2 , cd*cr);
	return 0;
}
