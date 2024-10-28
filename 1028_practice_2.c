#include <stdio.h>

int main() {
	int N,X;
	int a[10001];
	scanf("%d %d",&N,&X);
	for(int i=0; i<N; i++){
		scanf("%d",&a[i]);
	}
	for(int i=0; i<N; i++){
		if(a[i]<X){
			printf("%d ",a[i]);
		}
	}
	return 0;
}