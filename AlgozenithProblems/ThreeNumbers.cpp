#include<bits/stdc++.h>
using namespace std;

// Given two numbers K and S. Determine how many different values 
// of X,Y & Z such that (0≤X,Y,Z≤K) and X+Y+Z=S.

int main(){
    int k,s;
    cin>>k>>s;
    int cnt = 0;

    for(int x=0;x<=k;x++){
        for(int y=0;y<=k;y++){
            int z = s - x - y;
            if(z>=0 && z<=k){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;

    return 0;
}
