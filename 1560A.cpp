//pure implemenation problem 
// can solve if have sufficient looping and checking practices
// 1560A.cpp
// implementation
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int k;
		cin>>k;
		int i;
        for(i=1;;i++){
            if(i%3==0||i%10==3)continue;
            if(--k==0) {cout<<i<<"\n";
            break;
        }
}
	return 0;
    
}