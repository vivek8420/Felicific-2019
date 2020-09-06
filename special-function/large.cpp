#include "testlib.h"
#include <iostream>

using namespace std;
const int N=2*1e5;
const int M=1e6;
int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    int n=rnd.next(10000,N);
    int p=rnd.next(1,1000);
    int q=rnd.next(1,1000);
    cout<<n<<" "<<p<<" "<<q<<endl;
    for(int i=0;i<n;i++)
    	cout << rnd.next(1,M) <<" ";
    cout<<rnd.next(1, M)<<endl;
}