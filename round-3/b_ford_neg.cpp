#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;
#define int int32_t
#define MAX 100005
#define x first 
#define y second


signed main(int argc, char* argv[]){
	registerGen(argc, argv, 1);

	int n = atoi(argv[2]);
	int m = atoi(argv[3]);

	vector<int> prem(n);
	int i;
	for(i=0;i<n;i++){
		prem[i]=i+1;
	}

	shuffle(prem.begin(),prem.end());

	set<pair<int,int> > edges;

	cout<<n<<" "<<m<<" ";
	int sr=rnd.next(1,n);
	cout<<sr<<'\n';

	for(i=1;i<n;i++){
		edges.insert({min(prem[i-1],prem[i]),max(prem[i-1],prem[i])});
		m--;
	}

	while(m>0){
		int sz=edges.size();
		int u=rnd.next(1,n);
		int v=rnd.next(1,n);
		while(u==v)v=rnd.next(1,n);
		edges.insert({min(u,v),max(u,v)});
		if(sz!=edges.size())
			m--;
	}

	vector<pair<int,int> > edg;
	for(auto &e:edges){
		edg.push_back(e);
		i=rnd.next(0,1);
		if(i)
			swap(edg.back().x,edg.back().y);
	}
	shuffle(edg.begin(),edg.end());

	for(auto &e:edg){
		// if you want weight generate it here
		int mx_w1=-1e9,mx_w2=1e9;
		int w=rnd.next(mx_w1,mx_w2);
		cout<<e.x<<" "<<e.y<<" "<<w<<"\n";
	}

	return 0;
}
