int main() {
	int N,max=0,min=10000000000;
	int a[300];
	scanf("%d",&N);
	for(int i=0; i<N; i++){
		scanf("%d",&a[i]);
	}
	
	for(int i=0; i<N; i++){
		if(a[i]>max){
			max = a[i];
		}
		if(a[i]<min){
			min = a[i];
		}
	}
	printf("%d %d",min,max);
	return 0;
}