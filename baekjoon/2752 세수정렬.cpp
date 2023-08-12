#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a<b&&a<c) {
		cout<<a<<" ";
		if(b<c) {
			cout<<b<<" "<<c;
		} else{
			cout<<c<<" "<<b;
		}
	}else if(b<a&&b<c) {
		cout<<b<<" ";
		if(a<c) {
			cout<<a<<" "<<c;
		} else{
			cout<<c<<" "<<a;
		}
	} else {
		cout<<c<<" ";
		if(b<a) {
			cout<<b<<" "<<a;
		} else{
			cout<<a<<" "<<b;
		}
	}
	
}
