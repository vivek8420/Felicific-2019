#include "testlib.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    string s=rnd.next("[b-df-hj-np-tv-z]{10000,100000}");
    cout<<s.size()<<endl;
    cout<<s<<endl;
}
