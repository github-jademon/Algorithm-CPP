#include<iostream>
using namespace std;
int n,c=100000;
int main() {
	cin>>n;
	for(int i=0;;i++) {
		if(n-5*i<0) break;
		if((n-5*i)%3==0) {
			c=c<(n-5*i)/3+i?c:(n-5*i)/3+i;
		}
	}
	cout<<(c==100000?-1:c);
}

