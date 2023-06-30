#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
#define op  ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long  ll;
typedef long l;
void solve(){
    int a,b;
    cin>>a>>b;
    if(b==a) cout<<"YES"<<endl;
    else if(b<a){
        int rem = b;
        while(rem<a){
            rem=rem*2;
            if(rem==a) cout<<"YES"<<endl;
            else if(rem>a){cout<<"NO"<<endl;
            break;}
        }
    }else{
          int rem = a;
        while(rem<b){
            rem=rem*2;
            if(rem==b) cout<<"YES"<<endl;
            else if(rem>b){cout<<"NO"<<endl;
            break;}
        }
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
