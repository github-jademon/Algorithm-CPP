#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	
	if(b%a!=0) {
		printf("-1");
	} else {
		b=b/a;
		a=0;
		for(int i=0; i<1000; ++i) {
			if(b%6==0) {
				a+=2;
				b=b/6;
			} else if(b%2==0) {
				a++;
				b=b/2;
			} else if(b%3==0) {
				a++;
				b=b/3;
			} else {
				break;
			}
		}
		printf("%d", a||b==1?a:-1);
	}
}

