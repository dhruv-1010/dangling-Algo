//AC on first try
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
#define op ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long  ll;
typedef long l;
void solve(){
    int n,p,x,y,sum=0;
    cin>>n>>p>>x>>y;
    vector<int> people(n);
    for(int i =0;i<n;i++) cin>>people[i];
    for(int i=0;i<p;i++){
        if(people[i]==0) sum+=x;
        else sum+=y;
    }
    cout<<sum<<endl;
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
