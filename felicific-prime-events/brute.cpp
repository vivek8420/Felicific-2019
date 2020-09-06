#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PI pair<int,int>
#define ff first
#define ss second
#define endl '\n'
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL)


bool isPrime(int n){
	if(n==1)
		return false;
	for(int i=2;i<n;i++){
		if(n%i==0)
			return false;
	}
	return true;
}

int32_t main()
{
    boost;
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif // ONLINE_JUDGE

     int l,r;
     cin>>l>>r;
     int cnt=0;
     for(int i=l;i<=r;i++){
     	if(isPrime(i))
     		cnt++;
     }

     double ans=(cnt*1.0)/(r-l+1);
     cout<<ans<<endl;
}