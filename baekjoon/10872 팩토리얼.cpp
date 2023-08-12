#include<bits/stdc++.h>
using namespace std;
int n;
int f(int i) {
	return i<1?1:f(i-1)*i;
}
int main() {
	ios_base :: sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);
	cin>>n;
	cout<<f(n);
}
