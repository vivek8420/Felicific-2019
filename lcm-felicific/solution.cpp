#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> solve(int n) {
    vector<int>ans;
    int m=n;
    for(int i=2;i<=sqrt(n);i++){
        int tmp=1;
        while(m%i==0){
            tmp*=i;
            m/=i;
        }
        if(tmp!=1)
            ans.push_back(tmp);
    }
    if(m>2)
        ans.push_back(m);
    return ans;
}

int32_t main()
{
    int n;
    cin>>n;
    vector<int> ans = solve(n);
    if(ans.size()==1){
        cout<<-1<<endl;
        return 0;
    }
    cout<<ans.size()<<endl;
    for(int tt:ans)
        cout<<tt<<" ";
    cout<<endl;
}