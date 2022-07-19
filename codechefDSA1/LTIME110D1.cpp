#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	   int a,b,c,d;
	   cin>>a>>b>>c>>d;
	   cout<<min(a+b,c+d)<<"\n";
	}
	return 0;
}
