#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

int main(){
	int k=ouf.readInt();
	int kj=ans.readInt();
	
	if(k==-1){
		if(k==kj)
			quitf(_ok,"Answer not possible.");
		else
			quitf(_wa,"Answer is possible , found = -1");
	}
	else if(kj==-1){
		quitf(_wa,"expexted = -1, Answer not possible.");
	}
	else if(k<=1){
		quitf(_wa,"violation of constrain k.");
	}
	else{
		int lcm=ouf.readInt();
		if(lcm<2){
			quitf(_wa,"violation of constrain Ai.");
			return 0;		
		}
		for(int i=1;i<k;i++){
			int tt=ouf.readInt();
			if(tt<2){
				quitf(_wa,"violation of constrain Ai.");
				return 0;
			}
			lcm=(tt*lcm)/(__gcd(tt,lcm));
		}

		if(lcm == inf.readInt()){
			quitf(_ok,"LCM of sequence is n.");
		}
		else{
			quitf(_wa,"LCM of sequence is not n.");
		}
	}
	return 0;
}