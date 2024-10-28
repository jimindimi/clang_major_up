#include <stdio.h>

int main() {
	int N,count = 0,k;
	int a[300]={0};
	scanf("%d",&N);
	
	
	for(int i=0; i<N; i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	for(int i=0; i<N; i++){
		if(k==a[i]){
			count++;
		}
	}
	printf("%d",count);
	return 0;
}