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
    for(int i=0;i<n;i++){
    	int sum=0;
    	for(int j=i;j<n;j++)
    		sum+=a[j];
    	cout<<sum<<" ";
    }
    cout<<endl;
}
