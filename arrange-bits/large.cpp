#include "testlib.h"
#include <iostream>

using namespace std;

const int N=(1<<30);

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    int t=rnd.next(1,10000);
    cout<<t<<endl;
    while(t--){
    	cout << rnd.next(1, N) << endl;
    }
}