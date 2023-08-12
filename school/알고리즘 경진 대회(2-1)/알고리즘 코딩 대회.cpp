#include<iostream>
#include<map>
using namespace std;
int a, b=100;
char s[100];
map<char, int> m;
int main() {
	m['G']=0;
	m['b']=0;
	m['s']=0;
	m['w']=0;
	m['A']=0;
	m['l']=0;
	m['g']=0;
	m['o']=0;
	cin>>s;
	for(int i=0;i<sizeof(s);i++) {
		if(s[i]=='G'||s[i]=='b'||s[i]=='s'||s[i]=='w'||s[i]=='A'||s[i]=='l'||s[i]=='g'||s[i]=='o'){
			m[s[i]]++;
		}
	}
	for(auto i:m) {
		if(i.second<b){
			b=i.second;
		}
	}
	cout<<b;
}
