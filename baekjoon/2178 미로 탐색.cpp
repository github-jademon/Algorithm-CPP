#include<iostream>
#include<queue>
#define MAX 100

using namespace std;

int map[MAX][MAX];
int cnt[MAX][MAX];
int n,m;
int dx[4] = {0,1,0,-1,};
int dy[4] = {-1,0,1,0,};

void bfs(int x, int y) {
	cnt[x][y]++; // visited
	// queue<pair<int, int>> q;
	queue<int> qx; // x좌표 queue 
	queue<int> qy; // y좌표 queue 
	
	qx.push(x);
	qy.push(y);
	
	while(!qx.empty() && !qy.empty()) {
		int xx = qx.front();
		int yy = qy.front();
		qx.pop();
		qy.pop();
		for(int i=0; i<4; i++) { // 0
			int nx = xx + dx[i]; // 0 -> 0 
			int ny = yy + dy[i]; // 0 -> -1
			if(nx >= 0 && nx < n && ny >= 0 && ny < m && map[nx][ny] && !cnt[nx][ny]) {
				qx.push(nx);
				qy.push(ny);
				cnt[nx][ny]=cnt[xx][yy]+1;
			}
			
		}
	}
	
}

int main() {
	cin>>n>>m;
	for(int i=0; i<n; i++) { // n이 행 
		for(int j=0; j<m; j++) { // m이 열a 
			scanf("%1d",&map[i][j]);
		}
	}
	bfs(0,0);
	for(int i=0; i<n; i++) { // n이 행 
		for(int j=0; j<m; j++) { // m이 열a 
			printf("%d ",cnt[i][j]);
		}
		puts("");
	}
	cout << cnt[n-1][m-1];
}
