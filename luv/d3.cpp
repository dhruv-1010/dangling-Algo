// buggy code down dont commit
#include <bits/stdc++.h>

using namespace std;
int main(){
    vector<int> a(5);
    for(int i:a){
        cin>>a[i];
    }
    // vector functions
    for(int i:a){
        cout<<a[i]<<" ";
        // auto doesnt work am i wrong?
    }
    return 0;
}
// STL Begins.
// main topics in STL.
// containers -- structures prebuilt like vectors,map.
// iterators -- pointer type object -- begin end rbegin rend some more auto keyword,random and many more
// some famous algorithms -- swap,sum,max,min,max_element,min_element and their return types
// // functors [not in use ] basically are just classes that can oprate as functions