#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
typedef long long  ll;
typedef long l;
void solve(){
    int w1,w2,x1,x2,m;
    cin>>w1>>w2>>x1>>x2>>m;
    int in =w2-w1;
    if(in>=m*x1 && in<=m*x2) cout<<1<<endl;
    else cout<<0<<endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// your code goes here
	l t;
	cin>>t;
	while(t--){
	   solve();
	}
	return 0;
}
