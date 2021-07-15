#include <stdio.h>
#include <string.h>

int main(){
	char arr[100];
	fgets(arr,100,stdin);
	int i, chu=0, so=0, khac=-1;
	for(i=0;i<strlen(arr);i++){
		if((arr[i]<='z'&&arr[i]>='a') || 
		(arr[i]<='Z' && arr[i]>= 'A')) chu++;
		else if(arr[i]<='9'&&arr[i]>='0') so++;
		else khac++;
	}
	printf("%d %d %d", chu, so, khac);
	return 0;
}
