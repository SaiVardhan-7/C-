#include<bits/stdc++.h>
using namespace std;
// Input : http://www.cleartrip.com/signin/service?
//         username=test&pwd=test&profile=developer&role=ELITE&key=manager

// Output : username: test
//          pwd: test
//          profile: developer
//          role: ELITE
//          key: manager
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin,s);

    size_t pos = s.find('?');

    if(pos!=string::npos){
        string query = s.substr(pos+1);
        stringstream ss(query);
        string token;

        while(getline(ss,token,'&')){
            size_t equalPos = token.find('=');
            
            if(equalPos!=string::npos){
                string parameter = token.substr(0,equalPos);
                string value = token.substr(equalPos+1);
                cout<<parameter<<": "<<value<<endl;
            }
        }
    }

    return 0;
}
