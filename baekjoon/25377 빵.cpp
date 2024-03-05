#include<bits/stdc++.h>
int main() {
	int a, b, c, s=10000;
	scanf("%d",&a);
	for(int i=0; i<a; ++i) {
		scanf("%d %d", &b, &c);
		if(c-b>=0&&c<s) {
			s = c;
		}
	}
	printf("%d",s==10000?-1:s);
}
