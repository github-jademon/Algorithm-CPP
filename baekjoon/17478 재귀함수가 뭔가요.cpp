#include<bits/stdc++.h>
using namespace std;
int n;
void f(int i) {
	string tmp;	
	for(int j=0; j<n-i; ++j) tmp+="____";
	cout<<tmp<<"\"����Լ��� ������?\"\n";
	if(i!=0) {
		cout<<tmp<<"\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
		cout<<tmp<<"���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
		cout<<tmp<<"���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";
	} else {
		cout<<tmp<<"\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
	}
	if(i!=0) f(i-1);
	cout<<tmp<<"��� �亯�Ͽ���.\n";
}
int main() {
	ios_base :: sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);
	cin>>n;
	cout<<"��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
	f(n);
	
}
