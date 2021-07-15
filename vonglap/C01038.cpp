#include <stdio.h>
#include <string.h>

int main(){
	char arr[10], c;
	scanf("%s", &arr);
	int len=strlen(arr), i=0, j;
	c=arr[0];
	arr[0]=arr[len-1];
	arr[len-1]=c;
	if(arr[0]=='0') i=1;
	for(j=i;j<len;j++) printf("%c", arr[j]);
	return 0;
}
