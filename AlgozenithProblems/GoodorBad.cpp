// The string is Good if and only if it has "010" or "101" as one of its 
// substrings and it's not necessary to have both of them.

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        
        // string::npos is a constant defined in the C++ Standard Library that represents "no position" or "not found" in string operations.
        
        if(s.find("101")!=string::npos || s.find("010")!=string::npos){
            cout<<"Good"<<endl;
        }
        else{
            cout<<"Bad"<<endl;
        }
    }
    return 0;
}
