#include<iostream>
using namespace std;

int main() {
	int t, a, b, c;
	
	cin>>t;
	
	for(int i=0; i<t; ++i) {
		cin>>a>>b>>c;
		if(a-1<(b-c>0?b-c:c-b)+c-1) {
			cout<<"1\n";
		} else if(a-1==(b-c>0?b-c:c-b)+c-1) {
			cout<<"3\n";
		} else {
			cout<<"2\n";
		}
	}
}
