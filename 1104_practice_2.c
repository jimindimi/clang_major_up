#include <stdio.h>

int main() {
	int count=0;
	char a[101];
	scanf("%s",a);
	for(int i=0; a[i] != NULL; i++){
		count++;
	}
	printf("%d",count);
}