#include "testlib.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    int t=rnd.next(1,100);
    cout<<t<<endl;
    while(t--){
    	cout << rnd.next(1, 1000) << endl;
    }
}