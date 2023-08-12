#include<iostream>
using namespace std;

int main() {
	int a[2][10], s1[2]={0,};
	for(int k=0; k<2; ++k) {
		for(int i=0; i<10; ++i) {
			cin>>a[k][i];
		}
	}
	for(int k=0; k<2; ++k) {
		for(int i=0; i<9; ++i) {
			for(int j=0; j<9-i; ++j) {
				if(a[k][j]<a[k][j+1]) {
					int t = a[k][j+1];
					a[k][j+1] = a[k][j];
					a[k][j] = t;
				}
			}
		}
	}
	for(int k=0; k<2; ++k) {
		for(int i=0; i<3; ++i) {
			s1[k]+=a[k][i];
		}
	}
	cout<<s1[0]<<" "<<s1[1];
}
