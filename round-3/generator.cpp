/*
   1. bfs -> 30 test cases, 15 - n<=1000 10 - m<=1000 5- m=n*(n-1)/2, 15 - n=<1e5,m<=5*1e5
   2. dijkstra -> 20 test cases, n=1e5,m=2*1e5 - 5*1e5
   3. bellman - ford -> 30 test cases, 10 - n=500,m=5*n -1e9<=w<=100,20 - n=1000-2000,m=3*n 10 neg
   4. spfa -> same as dijkstra only 10 negative cycle
*/

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
		// int w=rnd.next(1,1e9);
		cout<<e.x<<" "<<e.y<<"\n";
	}

	return 0;
}
