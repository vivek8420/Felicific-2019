#include "testlib.h"
#include <iostream>

using namespace std;
const int N=1e9;

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    int n=rnd.next(2,100000);
    cout<<n<<endl;
    for(int i=0;i<n-1;i++)
    	cout << rnd.next(1, N) <<" ";
    cout<<rnd.next(1, N)<<endl;
}