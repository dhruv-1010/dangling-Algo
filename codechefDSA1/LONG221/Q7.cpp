#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
#define op  ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long  ll;
typedef long l;
void solve(){
    ll n,m,i,j;
    cin>>n>>m;
    if(n==1 || m==1){
    int ar[n][m],br[n][m];
    bool check =true;
    for(i =0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>ar[i][j];
        }
    }
    
    for(i =0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>br[i][j];
        }
    }
    for(i =0;i<n;i++){
        for(j=0;j<m;j++){
        if(ar[i][j]!=br[i][j]) check=false;
            }
        }
    if(check == true) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    }
    else{
        
        map<int,int> ee1,oo1,ee2,oo2;
        ll val;
        for(i =0;i<n;i++){
            for(j=0;j<m;j++){
               cin>>val;
               if((i+j)&1){
                   oo1[val]++;
               }else ee1[val]++;
        }
        }
        for(i =0;i<n;i++){
            for(j=0;j<m;j++){
               cin>>val;
               if((i+j)&1){
                   oo2[val]++;
               }else ee2[val]++;
        }
        }
        bool x = true;
        for(auto it = ee1.begin(); it != ee1.end(); ++it  ){
            if((it->second)!=ee2[(it->first)]){x = false;break;}
        }
        
        for(auto it = oo1.begin(); it != oo1.end(); ++it  ){
            if((it->second)!=oo2[it->first]){x = false;break;}
        }
        if(x) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
        }
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
