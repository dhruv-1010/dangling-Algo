#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long d,l,r;
    cin>>d>>l>>r;
    if(d<l) cout<<"Too Early\n";
    else if(d>=l && d<=r) cout<<"Take second dose now\n";
    else cout<<"Too Late\n";;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// your code goes here
	long t;
	cin>>t;
	while(t--){
	   solve();
	}
	return 0;
}
