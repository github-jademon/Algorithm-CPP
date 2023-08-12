#include<iostream>
#include<map>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
long long a, b, d, e;
map<char, int> m;
int main() {
	cin>>a;
	for(int i=0; i<a; i++, d=0) {
		cin>>b;
		while(1) {
			if(b<=0) {
				break;
			}
			if(b<=6) {
				d+=15;
				b-=6;
			} else if(b<=8) {
				d+=20;
				b-=8;
			} else {
				d+=25;
				b-=10;
			}
			cout<<b<<" "<<d<<"\n";
		}
		cout<<d<<"\n";
	}
}
