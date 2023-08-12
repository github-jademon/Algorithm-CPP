#include<stdio.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	for(int z=0; z<a; ++z) {
		for(int f=0; f<b; ++f) {
			for(int i=0; i<a; ++i) {
				for(int j=0; j<c; ++j) {
					printf(i%2==0?z%2==0?".":"#":z%2==0?"#":".");
				}
			}
//			for(int i=0; i<a*c; ++i) {
//				printf(i*c%2==0?z%2==0?".":"#":z%2==0?"#":".");
//			}
			printf("\n");
		}
	}
	
}
