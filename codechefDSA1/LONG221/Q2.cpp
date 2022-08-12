#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
#define op  ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long  ll;aa#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
#define op  ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long  ll;
typedef long l;
void solve(){
    ll a;
    cin>>a;
    if(a<=100) cout<<a<<endl;
    else if(a>100 && a<=1000) cout<<a-25<<endl;
    else if(a>1000 && a<=5000) cout<<a-100<<endl;
    else cout<<a-500<<endl;
}
int main() {
    op;
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
	   solve();
	}
	return 0;
}

