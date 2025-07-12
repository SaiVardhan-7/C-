#include<bits/stdc++.h>
using namespace std;
// Given a number N and an array A of N numbers, print the number of 
// subarrays which are non-decreasing.
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

        // int cnt = 0;
        // for(int i=0;i<n;i++){
        //     for(int j=i;j<n;j++){   // Brute Force Approach
        //         bool flag = true;
        //         for(int k=i;k<j;k++){
        //             if(arr[k]>arr[k+1]){
        //                 flag = false;
        //             }
        //         }
        //         if(flag){
        //             cnt++;
        //         }
        //     }
        // }
        int cnt = 0;
        int len = 1;
        for(int i=1;i<n;i++){      // Optimised Approach
            if(arr[i-1]<=arr[i]){
                len++;
            }
            else{
                cnt += (len*(len+1))/2;
                len = 1;
            }
        }
        cnt += (len*(len+1))/2;
        cout<<cnt<<endl;
    }
    return 0;
}
