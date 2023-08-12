#include<bits/stdc++.h>
using namespace std;
int n;
int f(int i) {
	return i==0?0:i<=2?1:f(i-1)+f(i-2);
}
int main() {
	ios_base :: sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);
	cin>>n;
	cout<<f(n);
}
