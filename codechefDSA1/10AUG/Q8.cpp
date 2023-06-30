#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    if(a>b) swap(a,b);
    if(c>d) swap(c,d);
    if(e>f) swap(e,f);
    if(a == c && b == d)
    {
        cout<<1<<endl;
    }
    else if(a == e && b == f)
    {
        cout<<2<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
    
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	   solve();
	}
	return 0;
}
