#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if((a==c)&&(b==d)) cout<<0<<"\n";
    else{
        if((a+b)&1){
            if((c+d)&1) cout<<2<<"\n";
            else cout<<1<<"\n";
        }else{
            if((c+d)&1) cout<<1<<"\n";
            else cout<<2<<"\n";
            
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// your code goes here
	int t;
	cin>>t;
	while(t--){
        solve();
	}
	return 0;
}
