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
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(isVowel(s[j]))
				break;
			ans=max(ans,j-i+1);
		}
	}
	cout<<ans<<endl;    
}
