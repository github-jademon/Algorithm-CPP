#include<iostream>
#include<queue>
#define MAXN 100
using namespace std;

int visited[MAXN+1], dist[MAXN+1], from[MAXN], order[MAXN];
int e[MAXN+1][MAXN+1], n;
int begin, end, cnt;
void output(int cnt) {
	int i;
	for(i=1; i<=cnt; i++) {
		cout<<order[i]<<" ";
	}
	cout<<"\n";
}

void BFS(int start) {
	int u, v;
	queue<int> q;
	cnt=0;
	dist[start] = 0;
	from[start] = -1;
	q.push(start);
	visited[start]=1;
	while(!q.empty()) {
		u = q.front();
		q.pop();
		order[++cnt] = u;
		for(v=1; v<=n; v++) {
			if(e[u][v]==1) {
				if(visited[v]==0) {
					dist[v] = dist[u]+1;
					from[v] = u;
					q.push(v);
					visited[v]=1;
				}
			}
		}
	}
//	output(cnt);
}

int main() {
	int i,j,m,a,b;
	cin>>n>>m;
	for(i=1; i<=m; i++) {
		cin>>a>>b;
		e[a][b] = e[b][a] = 1;
	}
	order[1] = 1;
	BFS(1);
//	output();
	cout<<cnt-1;
}
