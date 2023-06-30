#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
#define op ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long  ll;
typedef long l;
void solve(){
   ll n, k;
		cin >> n >> k;
		if(k == 0)
			cout << n << endl;
		else
			cout << n % k << endl;
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
