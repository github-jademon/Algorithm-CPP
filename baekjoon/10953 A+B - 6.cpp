#include<stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	for(;t-->0;) {
		int a, b;
		scanf("%d,%d", &a, &b);
		printf("%d\n",a+b);
	}
}
