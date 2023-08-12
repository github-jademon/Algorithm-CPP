#include<iostream>
using namespace std;

int main() {
	int a, b;
	
	cin>>a>>b;
	cout<<((b-a)==1||(a==1 && b==10)?"Yes":"No");
}
