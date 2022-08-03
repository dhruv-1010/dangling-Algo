#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	   int i,x,y,ans,res;
	   cin>>x>>y;
	   int maximum = max(x,y);
	   int minimum = min(x,y);
	   ans = max(maximum,minimum);
	   for(i = minimum;i<maximum;i++){
	       res = max(abs(minimum-i),abs(maximum-i));
	       ans = min(res,ans);
	   }cout<<ans<<"\n";
	}
	return 0;
}
