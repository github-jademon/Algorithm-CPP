#include<stdio.h>
#include <iostream>
#include<map>
#include<string>

using namespace std;

int main() {
	int n=0, k;
	string s;
	map<string, int> m;
	
	scanf("%d", &k);
	
	for(int i=0; i<k; ++i) {
		cin>>s;
		m[s]=0;
	}
	
	scanf("%d", &k);
	for(int i=0; i<k; ++i) {
		cin>>s;
		if(m.find(s)!=m.end()) {
			if(m[s]==0) n++;
			m[s]++;
		}
	}
	
	printf("%d\n",n==0?n:(m.size()-n));
	
	for(auto &i : m) {
		if(i.second==0) {
			cout<<i.first<<"\n";
			n++;
		}
	}
}
