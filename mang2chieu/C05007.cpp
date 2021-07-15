int main(){
	int m, n;
	scanf("%d%d", &m, &n);
	int arr[m][n], i, j, a, b;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d", &arr[i][j]);
		}
	}
	scanf("%d%d", &a, &b);
	for(i=0;i<m;i++){
		int sw=arr[i][a-1];
		arr[i][a-1]=arr[i][b-1];
		arr[i][b-1]=sw;
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
