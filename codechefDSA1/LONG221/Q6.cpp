/*
Author : Dhruv Singh 
Time : 08/13/2022 11:27:32.44 AM
*/
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
#define op  ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long  ll;
typedef long l;
void solve(){
    ll i,n,x,y;
        cin>>n>>x>>y;
        // The OFT Best Data Structures to ever exist pq automatically sorts everything [default is desceneding] to ascend use greater int p.s. todo i need to learn heaps maxheap and some amount of stl now.
        priority_queue<int,vector<int>,greater<int>> pq;
        for(i=0;i<n;i++){
            int val;
            cin>>val;
            pq.push(val);
        }
        while(y>0){
            int min = pq.top();
            if((min^x)> min){
                pq.pop();
                pq.push((min^x));
                y--;
            }else{
            // repitions of min val can be coped by using these operations
            // even if we get some val again in array like in tc 3 check question
            // we can reduce time complexity by breaking iteration.
            // proof can be done
            // if y is odd , one more iteration or swapping would be done. 
            // else we would get same array again as repetitions of iteration would 
            // happen can be proved 
                if((y&1)==0){
                    break;
                }else{
                    pq.pop();
                    pq.push((min^x));
                    break;
                }
            }
        }
        // the beauty is i can  use STL anywhere man
        while(!pq.empty()){
            cout<<pq.top()<<" ";
            pq.pop();
        }cout<<""<<endl;
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
