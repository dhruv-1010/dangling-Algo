#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
    while(t--){
        long long a,i,res;
        int b,c,sum;
        cin>>a>>b>>c;
        sum=b+c;
        for(i=0;i<(a-2);i++){
            res = sum%10;
            sum+=res;
        }
        cout<<sum<<endl;
        if(sum%3==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	return 0;
}
