#include<bits/stdc++.h>
using namespace std;
// Input : Shsssssssssh ... I am hunting wabbits. Heh Heh Heh Heh ...
// Output : 9
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin,s);
    
    int cnt = 0;
    bool inWord = false;
    for(char c : s){
        if(isalpha(c)){
            if(!inWord){
                cnt++;
                inWord = true;
            }
        }
        else{
            inWord = false;
        }
    }
    cout<<cnt<<endl;

    return 0;
}
