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

int solve (int n,int *a){
    int l=0,r=0,ans=inf;
    sort(a,a+n);
    for(int i=1;i<n;i++){
        while(l<i && p*a[i]>=q*a[l]){
            ans=min(ans,p*a[i]-q*a[l]);
            l++;
        }
        while(r<n && q*a[r]>=p*a[i]){
            ans=min(ans,q*a[r]-p*a[i]);
            r++;
        }
        ans=min(ans,abs(p*a[i]-q*a[l]));
    }
    return ans;
}

int32_t main(){
    boost;
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif // ONLINE_JUDGE

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int ans=solve(n,a);
    cout<<ans<<endl;
}
