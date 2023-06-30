#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
#define op  ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long  ll;
typedef long l;
void solve(){
    double s,a,b,c;
    cin>>s>>a>>b>>c;
    double fp = s+(s*c)/100;
    if(fp>=a && fp<=b) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    
}
int main() {
    op;
	// your code goes here
	l t;
	cin>>t;
	while(t--){
	   solve();
	}
	return 0;
}
