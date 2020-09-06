#include <bits/stdc++.h>
using namespace std;
#define int long long

const int M=1e9+7;
int mod(int n){
    n%=M;
    return (n+M)%M;
}

int32_t main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif // ONLINE_JUDGE

	int n,p,q;
	cin>>n>>p>>q;
	int a[n];
	int ans=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		for(int j=i-1;j>=0;j--){
			if(a[i]>a[j])
				ans=mod(ans+mod(mod(p*a[i])-mod(q*a[j])));
		}
	}
	cout<<ans<<endl;
}