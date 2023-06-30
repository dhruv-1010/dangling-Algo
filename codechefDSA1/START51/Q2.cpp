#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
#define op ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long  ll;
typedef long l;
void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if((a-c)<(b-d)) cout<<"First"<<endl;
    else if((a-c)==(b-d)) cout<<"Any"<<endl;
    else cout<<"Second"<<endl;
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
