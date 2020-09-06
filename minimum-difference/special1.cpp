#include "testlib.h"
#include <iostream>

using namespace std;

vector<int>prime;

void sieve(){
	const int n=1e7;
	bool p[n+1];
	memset(p,true,sizeof p);
	p[1]=0;
	for(int i=2;i*i<n;i++){
		if(p[i]){
			for(int j=i*i;j<n;j+=i)
				p[j]=0;
		}
	}
	for(int i=1;i<n;i++)
		if(p[i])
			prime.push_back(i);
}

int main(int argc, char* argv[])
{
	sieve();
    registerGen(argc, argv, 1);
    int n=rnd.next(2,100000);
    cout<<n<<endl;
    int N=prime.size();
    for(int i=0;i<n-1;i++)
    	cout << prime[rnd.next(0, N-1)] <<" ";
    cout<<prime[rnd.next(1, N)]<<endl;
}