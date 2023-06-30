#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        if(a<100)cout<<"Easy"<<"\n";
        else if(a>=100 && a<200) cout<<"Medium"<<"\n";
        else cout<<"Hard"<<"\n";
    }
	// your code goes here
	return 0;
}
