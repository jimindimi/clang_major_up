#include <stdio.h>
#include <string.h>
int main() {
	int a=0;
	char T[1001];
	scanf("%d",&a);
	for(int i=0; i<a; i++){
		scanf("%s",T);
		printf("%c",T[0]);
		printf("%c\n",T[strlen(T)-1]);
	}
	
}