#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PI pair<int,int>
#define ff first
#define ss second
#define endl '\n'
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL)

const int inf=1e15;
int p=2,q=5;
int brute_force(int n,int *a){
	int ans=inf;
	sort(a,a+n);
	int v1=a[0],v2=a[1];
	for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            ans=min(ans,abs(p*a[i]-q*a[j]));
            ans=min(ans,abs(p*a[j]-q*a[i]));
        }
    }
    return ans;
}

int32_t main(){
	boost;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    	cin>>a[i];
    int ans=brute_force(n,a);
    cout<<ans<<endl;
}
