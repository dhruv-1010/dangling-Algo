#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
#define op ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long  ll;
typedef long l;
void solve(){
    int n,i,j;
    cin>>n;
    int ar[n];
    map<int,int> mp;
    for(i=0;i<n;i++){
        cin>>ar[i];
        mp[ar[i]]++;
    }
    pair<int,int> maxx =make_pair(0,0);
    map<int, int>::iterator i;
    for (i = mp.begin();i!= mp.end();i++) {
        if (i->second > maxx.second) {
            maxx= make_pair(i->first,i->second);
        }
        else if (i->second == maxx.second) {
        maxx= make_pair(0,0);
        }
    }
    if(maxx.second!=0)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
            
            
    
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
