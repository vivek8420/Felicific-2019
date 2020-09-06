#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PI pair<int,int>
#define ff first
#define ss second
#define endl '\n'
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL)

const int inf=1e15;

vector < vector<PI> > g;
vector<int> dijkstra(int sr,int n){
	bool visit[n+1];
	memset(visit,false,sizeof visit);
	vector<int>dist(n+1,inf);
	multiset<PI>ms;
	ms.insert({0,sr});
	dist[sr]=0;
	while(!ms.empty()){
		PI u=*ms.begin();
		ms.erase(u);
		if(visit[u.ss])
			continue;
		visit[u.ss]=true;
		for(PI v:g[u.ss]){
			if(!visit[v.ff] && dist[v.ff] >= u.ff+v.ss){
				dist[v.ff]=u.ff+v.ss;
				ms.insert({dist[v.ff],v.ff});
			}
		}
	}
	return dist;
}

int32_t main() { 
	boost;
	int n,m,sr;
	cin>>n>>m>>sr;
	g.resize(n+1);
	for(int i=1;i<=m;i++){
		int u,v,w;
		cin>>u>>v>>w;
		g[u].push_back({v,w});
		g[v].push_back({u,w});
	}

	vector<int> ans=dijkstra(sr,n);
	for(int i=1;i<=n;i++)
		cout<<ans[i]<<" ";
	cout<<endl;	
}