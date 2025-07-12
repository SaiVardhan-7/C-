// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

//     int T;
//     cin>>T;

//     while(T--){
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }

//         int min = INT_MAX;
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 int sum = arr[i]+arr[j]+j-i;
//                 if(min>sum){
//                     min = sum;
//                 }
//             }
//         }
//         cout<<min<<endl;
//     }

//     return 0;
// }

// Time complexity : O(N)
#include <bits/stdc++.h>
using namespace std;

// Given a number N and a array A of size N numbers. Find the smallest possible result of 
// Ai + Aj + j - i where 0<=i<j<=N.

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int T;
    cin >> T;
    
    while (T--) {
        int n;
        cin >> n;
        vector<int> A(n);
        for (int i = 0; i < n; ++i)
            cin >> A[i];
        
        int result = INT_MAX;
        int minL = A[0] - 0;  // Initialize with i = 0

        for (int j = 1; j < n; ++j) {
            int R = A[j] + j;
            result = min(result, minL + R);
            minL = min(minL, A[j] - j);  // Update L for next j
        }
        
        cout << result << '\n';
    }
    
    return 0;
}
