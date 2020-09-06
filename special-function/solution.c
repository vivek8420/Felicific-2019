#include<stdio.h>
#include<stdlib.h>
#define ll long long
#define N 1000001
const ll M=1e9+7;
ll mod(ll n){
    n%=M;
    return (n+M)%M;
}

ll bit1[N],bit2[N];
void update(ll x,ll val,ll *bit){
    while(x<N){
        bit[x]=mod(bit[x]+val);
        x+=x&(-x);
    }
}

ll query(ll x,ll *bit){
    ll ans=0;
    while(x>0){
        ans=mod(ans+bit[x]);
        x-=x&(-x);
    }
    return ans;
}

int main()
{
    int n,i,j,p,q;
    scanf("%d %d %d",&n,&p,&q);
    ll a[n];
    for(i=0;i<n;i++)
        scanf("%lld",&a[i]);

    ll ans=0;
    for(int i=0;i<n;i++){
        ans=mod(ans+mod(mod(mod(p*a[i])*query(a[i]-1,bit2))-mod(q*query(a[i]-1,bit1))));
        update(a[i],a[i],bit1);
        update(a[i],1,bit2);
    }
    printf("%lld\n",ans);
}

