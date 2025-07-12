#include<bits/stdc++.h>
using namespace std;

// In Encryption: For each letter x in Original, replace it by the equivalent letter y from KEY.
// In Decryption: For each letter y in Key, replace it by the equivalent letter x from ORIGINAL.

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int Q;
    cin>>Q;
    string S;
    cin>>S;

    string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    if(Q==1){
        for(int i=0;i<S.size();i++){
            size_t pos = original.find(S[i]);
            if(pos!=string::npos){
                S[i] = key[pos];
            }
        }
    }
    else{
        for(int i=0;i<S.size();i++){
            size_t pos = key.find(S[i]);
            if(pos!=string::npos){
                S[i] = original[pos];
            }
        }
    }
    cout<<S<<endl;

    return 0;
}
