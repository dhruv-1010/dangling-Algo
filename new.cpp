#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long a = (int)n/3;
		long long b = n-2*a;
		cout<<a<<" "<<b<<"\n";
	}
	return 0;
}