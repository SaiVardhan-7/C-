#include<bits/stdc++.h>
using namespace std;

// Given a number N and an array A of N positive numbers.
// Print maximum possible operations that can be performed.

// The operation is as follows: if all numbers are even then divide each 
// of them by 2 otherwise, you can not perform any more operations.

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin>>T;

    while(T--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int noOfOps = INT_MAX;
        for(int i=0;i<n;i++){
            int cnt = 0;
            while(arr[i]%2==0){
                arr[i] /= 2;
                cnt++;
            }
            noOfOps = min(noOfOps,cnt);
        }
        cout<<noOfOps<<endl;
    }

    return 0;
}
