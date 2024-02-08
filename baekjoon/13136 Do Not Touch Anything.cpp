#include<bits/stdc++.h>
int main() {
	long long a, b, c;
	scanf("%lld %lld %lld",&a,&b,&c);
	printf("%lld",(a/c+(a%c==0?0:1))*(b/c+(b%c==0?0:1)));
}
