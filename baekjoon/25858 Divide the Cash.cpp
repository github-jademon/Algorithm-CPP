#include<bits/stdc++.h>
int main() {
	int a, b, c=0, i;
	scanf("%d %d",&a,&b);
	int d[a];
	for(i=0; i<a; ++i) {
		scanf("%d",&d[i]);
		c+=d[i];
	}
	b/=c;
	for(i=0; i<a; ++i) {
		printf("%d\n",d[i]*b);
	}
}
