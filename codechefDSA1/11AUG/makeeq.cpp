#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
#define op  ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long  ll;
typedef long l;
void solve(){
    int n,i;
    cin>>n;
    vector<int> v(n);
    for(i=0;i<n;i++)  cin>>v[i];
    cout<<*max_element(v.begin(),v.end())-*min_element(v.begin(),v.end())<<endl;
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
