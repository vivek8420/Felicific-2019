#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int ans = (n%6==0)?n/6:n/6+1;
		cout<<ans<<endl;
	}
}
