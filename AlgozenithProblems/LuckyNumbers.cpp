#include<bits/stdc++.h>
using namespace std;

// A lucky number is any positive number whose decimal representation
// contains only the digits 4 and 7. ex : 4,7,47,74,447,....

bool isLucky(int x){
    while(x>0){
        int digit = x%10;
        if(digit!=4 && digit!=7){
            return false;
        }
        x /= 10;
    }

    return true;
}

int main(){
    int a,b;
    cin>>a>>b;
    bool found = false;

    for(int i=a;i<=b;i++){
        if(isLucky(i)){
            cout<<i<<" ";
            found = true;
        }
    }

    if(!found){
        cout<<-1;
    }

    return 0;
}
