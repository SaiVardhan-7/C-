#include<bits/stdc++.h>
using namespace std;

// A subsequence is a sequence that can be derived from another sequence by deleting 
// some or no elements without changing the order of the remaining elements.

// If the array is [1,6,3,7], then some subsequences are [1,3,7], [6,7], [1], [6,3,7], [1,7]. 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin>>T;

    while(T--){
        int n,m;
        cin>>n>>m;
        int arr[n], brr[m];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<m;i++){
            cin>>brr[i];
        }
        
        int i=0,j=0;
        while(i<n && j<m){
            if(arr[i]==brr[j]){
                j++;
            }
            i++;
        }
        if(j==m){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
