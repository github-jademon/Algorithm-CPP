#include<bits/stdc++.h>
using namespace std;
int n, k;
int f(int n, int k) {
	return k==0||k==n?1:f(n-1, k-1)+f(n-1, k);
}
int main() {
	ios_base :: sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);
	cin>>n>>k;
	cout<<f(n, k);
}
