#include <bits/stdc++.h>
using namespace std;
#define int long long

vector < vector<int> > g;
vector<int> bfs(int sr,int n){
	bool visit[n+1];
	memset(visit,false,sizeof visit);
	vector<int> ans(n,0);
	queue<int>q;
	q.push(sr);
	visit[sr]=true;
	while(!q.empty()){
		int u = q.front();
		q.pop();
		for(int v:g[u]){
			if(visit[v])
				continue;
			visit[v]=true;
			ans[v-1]=ans[u-1]+1;
			q.push(v);
		}
	}
	return ans;
}

int32_t main() { 	
	int n,m,sr;
	cin>>n>>m>>sr;
	g.resize(n+1);
	for(int i=1;i<=m;i++){
		int u,v;
		cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}

	vector<int> ans=bfs(sr,n);
	for(int i:ans)
		cout<<i<<" ";
	cout<<endl;	
}