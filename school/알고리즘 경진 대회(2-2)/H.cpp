#include<stdio.h>

int a, b, c, f[11];
int n[11][11];

int main() {
	scanf("%d", &a);
	for(int i=0; i<a; ++i) {
		scanf("%d %d", &b, &c);
		n[b][c]=1;
		n[c][b]=1;
		f[b]++;
		f[c]++;
	}
	
	c=1, b=f[1];
	for(int i=2; i<=10; ++i) {
		if(b<f[i]) {
			b=f[i];
			c=i;
		}
	}
	
	printf("%d\n", c);
	for(int i=1; i<=10; ++i) {
		if(n[c][i]) {
			printf("%d ", i);
		}
	}
}
