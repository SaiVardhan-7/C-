#include <bits/stdc++.h>
using namespace std;
// Input : LLRRLLLRRR
// Output : 2
//         LLRR
//         LLLRRR
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;

    int cntL = 0, cntR = 0, start = 0;
    vector<string> balancedParts;

    for(int i = 0; i < s.size(); i++) {
        if (s[i] == 'L') cntL++;
        else cntR++;

        if (cntL == cntR) {
            balancedParts.push_back(s.substr(start, i - start + 1));
            start = i + 1;
            cntL = cntR = 0;
        }
    }

    cout << balancedParts.size() << '\n';
    for (auto &part : balancedParts) {
        cout << part << '\n';
    }

    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

//     string s;
//     cin>>s;

//     int cnt = 0, cntl = 0, cntr = 0;
//     int start = 0; 
//     string ans[1000];
//     for(int i=0;i<s.size();i++){
//         char ch = s[i];
//         if(ch=='L'){
//             cntl++;
//         }
//         else if(ch=='R'){
//             cntr++;
//         }

//         if(cntl==cntr){
//             ans[cnt] = s.substr(start,i-start+1);
//             cnt++;
//             start = i+1;
//             cntl = cntr = 0;
            
//         }
//     }
//     cout<<cnt<<endl;
//     for(int i=0;i<cnt;i++){
//         cout<<ans[i]<<endl;
//     }

//     return 0;
// }
