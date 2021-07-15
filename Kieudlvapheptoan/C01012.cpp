#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		getchar();
		char x;
		x=getchar();
		if(x<='z'&&x>='a') printf("%c\n", x-32);
		else if(x<='Z'&&x>='A') printf("%c\n", x+32);
	}
	return 0;
}
