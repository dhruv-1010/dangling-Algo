// 1475A.cpp
// how to check if a number is pow of two or not 
// bonus
// use num&(num-1)
// if produces 1 not
// else itis
// 1560A.cpp
// implementation
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	long long a,i;
	cin>>a;
	if(a&(a-1))cout<<"Yes"<<"\n";
	else cout<<"No"<<"\n";
	}
	return 0;
    
}