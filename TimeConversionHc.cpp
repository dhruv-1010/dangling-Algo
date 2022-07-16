#include <bits/stdc++.h>
#include <string.h>
using namespace std;
// to_string stoi not declared wtf i am not happy
// debug debug debug
// TimeConversionHc.cpp: In function 'std::string timeConversion(std::string)':
// TimeConversionHc.cpp:14:36: error: 'stoi' was not declared in this scope    
//          int am = stoi(s.substr(0,2)) + 12;
//                                     ^
// TimeConversionHc.cpp:18:28: error: 'to_string' was not declared in this scope
//          return to_string(am)+s.substr(2,6);
string timeConversion(string s) {
    if(s[8]=='A')
    {
        if(s[0]=='1' && s[0]=='2'){
            return "00" + s.substr(2,6);
        }
        return s.substr(0,8);}
    else{
        int am = stoi(s.substr(0,2)) + 12;
        if(am==24){
            return "12" + s.substr(2,6);
        }
        return to_string(am)+s.substr(2,6);
        
    }   
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
