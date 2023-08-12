#include<iostream>
using namespace std;
int n, m[1000], t, i, s;
int main() {
	cin>>n;
	for(i=0; i<n; i++) {
		cin>>m[i];
		for(int j=i; j>=0; j--) {
			if(m[j]<m[j-1]) {
				t=m[j];
				m[j]=m[j-1];
				m[j-1]=t;
			}
		}
	}
	for(int j=0; j<n; j++) {
		s+=m[j]*i--;
	}
	cout<<s;
}
