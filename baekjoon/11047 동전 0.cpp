#include<iostream>
using namespace std;
int n, k, i, m[10], s;
int main() {
	cin>>k>>n;
	for(i=0; i<k; i++) {
		cin>>m[i];
	}
	for(int j=i-1; j>=0; j--){
		s += n/m[j];
		n%=m[j];
	}
	cout<<s;
}

