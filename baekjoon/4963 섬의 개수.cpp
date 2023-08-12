#include<iostream>
#include<queue>
#include<cstring>
#define MAX 50
using namespace std;

int vx[8] = {0, 1, 1, 1, 0, -1, -1, -1};
int vy[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
int map[MAX][MAX];
bool v[MAX][MAX];
int w,h;
int cnt=0;

void bfs(int x, int y) {
	queue<pair<int, int>> q;
	q.push({x,y});
	v[x][y]=++cnt;
	
	while(!q.empty()) {
		int xx = q.front().first;
		int yy = q.front().second;
		q.pop();
		for(int i=0; i<8; i++) {
			int xxx = xx + vx[i];
			int yyy = yy + vy[i];
			if(xxx>=0 && xxx<h && yyy>=0 && yyy<w && !v[xxx][yyy] && map[xxx][yyy]) {
				v[xxx][yyy]=cnt;
				q.push({xxx,yyy});
			}
		}
	}
}

void make_map() {
	for(int i=0; i<h; i++) {
		for(int j=0; j<w;j++) {
			cin>>map[i][j];
		}
	}
	
	for(int i=0; i<h; i++) {
		for(int j=0; j<w; j++) {
			if(!v[i][j]&&map[i][j]) bfs(i, j);
		}
	}
	cout<<cnt<<endl;
	cnt=0;
	memset(map,0,sizeof(map));
	memset(v,0,sizeof(map));
}

int main() {
	
	cin>>w>>h;
	while(w&&h) {
		make_map();
		cin>>w>>h;
	} 
	
}
