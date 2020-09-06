#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c){
    if(c=='a' or c=='e' or c=='i' or c=='o' or c=='u')
        return true;
    else
        return false;
}

int main(){    
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0;
    int l=0;
    while(l<n){
        int r=l;
        while(r<n && !isVowel(s[r])){
            r++;
            ans=max(ans,r-l);
        }
        l=r+1;
    }
    cout<<ans<<endl;    
}