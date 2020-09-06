#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PI pair<int,int>
#define ff first
#define ss second

vector < vector<PI> > g;
const int inf=1e15;

vector<int> bellman_ford(int sr,int n){
    vector<int>d(n+1, inf);
    d[sr] = 0;
    int x;
    for (int i=0; i<n; ++i){
        x = -1;
        for (int u=1; u<=n; ++u){
        	for(PI v:g[u]){
		        if (d[u]< inf){
		            if (d[v.ff] > d[u] + v.ss){
		                d[v.ff] = max (-inf, d[u] + v.ss);
		                x = v.ff;
		            }
		        }
         	}
        }
    }
    if(x==-1)
    	return d;
    else{
    	d[0]=-1;
    	return d;
    }
}

int32_t main() { 
	int n,m,sr;
	cin>>n>>m>>sr;
	g.resize(n+1);
	for(int i=1;i<=m;i++){
		int u,v,w;
		cin>>u>>v>>w;
		g[u].push_back({v,w});
		g[v].push_back({u,w});
	}

	vector<int> ans=bellman_ford(sr,n);
	if(ans[0]==-1)
		cout<<-1;
	else{
		for(int i=1;i<=n;i++)
			cout<<ans[i]<<" ";
	}
	cout<<endl;	
}