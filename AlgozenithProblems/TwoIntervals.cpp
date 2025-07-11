#include<bits/stdc++.h>
using namespace std;
// Given the boundaries of two intervals. Print the boundaries of their intersection.
int main(){
    int T;
    cin>>T;

    while(T--){
        int l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;

        int start = max(l1,l2);
        int end = min(r1,r2);

        if(start>end){
            cout<<-1<<endl;
        }
        else{
            cout<<start<<" "<<end<<endl;
        }
    }
    return 0;
}
