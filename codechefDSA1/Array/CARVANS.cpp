// lowest speed logic was fine and pretty good as well
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
#define op ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long  ll;
typedef long l;
void solve(){
    ll n,i,cnt=0;
    cin>>n;
    int ar[n];
    for(i=0;i<n;i++){
        cin>>ar[i];}
    int ls = ar[0];
    for(int i = 1; i < n; i++){
        if(ls >= ar[i]){
            cnt++;
            ls = ar[i];
        }
    }
    cout<<cnt+1<<endl;
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
