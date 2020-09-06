#include "testlib.h"
#include <iostream>

using namespace std;
const int N=1e3;

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    string s=rnd.next("[a-z]{1,N}");
    cout<<s.size()<<endl;
    cout<<s<<endl;
}
