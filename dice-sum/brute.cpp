#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int ans=0;
		while(n>0){
			ans++;
			n-=6;
		}
		cout<<ans<<endl;
	}
}