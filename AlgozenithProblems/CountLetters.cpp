#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin>>s;
    vector<int> v(26);
    for(int i=0;i<s.size();i++){
        v[s[i]-'a']++;
    }

    for(int i=0;i<v.size();i++){
        if(v[i]>0){
            char ch = 'a'+i;
            cout<<ch<<" : "<<v[i]<<endl;
        }
    }

    return 0;
}
