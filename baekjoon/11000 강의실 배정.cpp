#include<iostream>
using namespace std;
int n, f, s, t[200000], i, p, ff, ss;
int main() {
	for(cin>>n;i<n;i++) {
		cin>>f>>s;
		for(int j=f; j<s; j++) {
			t[j]++;
		}
	}
	for(i=0; i<200000; i++) {
		p=p<t[i]?t[i]:p;
	}
	cout<<p;
}
