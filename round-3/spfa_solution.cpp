#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PI pair<int,int>
#define ff first
#define ss second
#define endl '\n'
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL)

vector < vector<PI> > g;
const int inf=1e15;

bool spfa(int sr,int n, vector<int> &d) {
    d.assign(n+1,inf);
    vector<int> cnt(n+1, 0);
    vector<bool> inqueue(n+1, false);
    queue<int> q;

    d[sr] = 0;
    q.push(sr);
    inqueue[sr] = true;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        inqueue[u] = false;
        for (auto edge : g[u]) {
            int to = edge.first;
            int len = edge.second;
            if (d[u] + len < d[to]) {
                d[to] = d[u] + len;
                if (!inqueue[to]) {
                    q.push(to);
                    inqueue[to] = true;
                    cnt[to]++;
                    if (cnt[to] > n)
                        return false;  // negative cycle
                }
            }
        }
    }
    return true;
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

	vector<int> ans;
	if(spfa(sr,n,ans)){
		for(int i=1;i<=n;i++)
			cout<<ans[i]<<" ";
	}
	else
		cout<<-1;
	cout<<endl;	
}