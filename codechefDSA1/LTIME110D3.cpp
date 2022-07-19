#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	   int n,breaks,y,z;
	   cin>>n>>y>>z;
	   if(n<3){
	       cout<<n*y<<"\n";
	   }else{
	       if(n%3==0){
	       breaks = n/3-1;}
	       else{
	           breaks = n/3;
	       }
	       cout<<n*y + breaks*z<<"\n";
	   }
	}
	return 0;
}
