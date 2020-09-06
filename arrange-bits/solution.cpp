#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N=32;
const int M=1e9+7;

int mod(int n){
    n%=M;
    return (n+M)%M;
}

int modInv(int a) 
{
    int m=M;
    int m0 = m;
    int y = 0, x = 1;

    if (m == 1)
      return 0;

    while (a > 1)
    {
        int q = a / m;
        int t = m;
        m = a % m, a = t;
        t = y;
        y = x - q * y;
        x = t;
    }
    if (x < 0)
       x += m0;
    return x;
}

int f[N];
void factorial(){
    f[0]=f[1]=1;
    for(int i=2;i<N;i++)
        f[i]=mod(i*f[i-1]);
}

int solve (int n){
    int a=log2(n)+1;
    int b=__builtin_popcount(n);//count set bit of N
    int ans=f[a];
    ans=mod(ans*modInv(f[b]));
    ans=mod(ans*modInv(f[a-b]));
    return ans;
}

int32_t main(){
    factorial();

    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=solve(n);
        cout<<ans<<endl;
    }
    return 0;
}
