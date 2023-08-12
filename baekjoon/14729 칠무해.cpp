#include<iostream>
#include<queue>
using namespace std;
int main() {
	priority_queue<float> mh;
	vector<float> v;
	int n;
	cin>>n;
	for(int i=0; i<n; i++) {
		double tmp;
		cin>>tmp;
		mh.push(tmp);
		if(mh.size()>7) mh.pop();
	}
	while(mh.size()) {
		v.push_back(mh.top());
		mh.pop();
	}
	for(int i=6; i>=0; i--) {
		printf("%.3lf\n",v[i]);
	}
	
}
