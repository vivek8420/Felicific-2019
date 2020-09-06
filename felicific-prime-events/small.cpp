#include "testlib.h"
#include <iostream>

using namespace std;
const int N=1e3;
int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    int l=rnd.next(1,N);
    int r=rnd.next(1,N);
    if(l>r)
    	swap(l,r);
    cout<<l<<" "<<r<<endl;
}