#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
int a,b,c,d,e,cnt;
int result[100001];
int visited[100001] = {0,};
vector<int> v[100001];	
void bfs(int c) {
	queue<int> q;
	q.push(c);
	visited[c]++;
	result[c] = ++cnt;
	while(!q.empty()) {
		int f = q.front();
		q.pop();
		for(int i=0; i<v[f].size(); ++i) {
			int tmp = v[f][i];
			if(!visited[tmp]) {
				result[tmp] = ++cnt;
				q.push(tmp);
				visited[tmp]++;
			}
		}
	}
}
int main() {
	cin>>a>>b>>c;
	for(int i=0; i<b; ++i) {
		cin>>d>>e;
		v[d].push_back(e);
		v[e].push_back(d);
	}
	for(int i=1; i<=a; ++i) {
		sort(v[i].begin(), v[i].end());
	}
	bfs(c,v,visited);
	for(int i=1; i<=a; ++i) {
		printf("%d\n", result[i]);
	}
}
