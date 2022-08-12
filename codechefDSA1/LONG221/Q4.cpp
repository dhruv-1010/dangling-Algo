#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
#define op  ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long  ll;
typedef long l;
void solve(){
    ll n,i,ss=0;
    cin>>n;
    int ar[n],br[n];
    ar[0]=0;
    br[0]=0;
    for(i=1;i<n;i++){
        cin>>ar[i];
        ss = ss + ar[i];
        br[i] = ar[i];
        ar[i] = ss;
    }
    ll bwait=0;
    for(i=0;i<(n-1);i++){
        bwait = ar[i+1]-br[i];
        if(bwait>0) br[i+1]=br[i+1]+br[i]+bwait;
        else br[i+1]=br[i+1]+br[i];
    }
    cout<<br[i]<<endl;
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
