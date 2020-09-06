#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PI pair<int,int>
#define ff first
#define ss second
#define endl '\n'
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL)


int32_t main(){
	boost;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    	cin>>a[i];
    int ans[n];
    int sum=0;
    for(int i=n-1;i>=0;i--){
    	sum+=a[i];
    	ans[i]=sum;
    }
    for(int i=0;i<n;i++)
    	cout<<ans[i]<<" ";
    cout<<endl;
}
