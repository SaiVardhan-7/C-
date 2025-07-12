#include<bits/stdc++.h>
using namespace std;

// Print "yes" if all neighbors of the given cell are 'x' otherwise, print "no" without quotations.
// Output:      Input:
// 1             yes
// 3 3
// x x x
// x . x
// x x x
// 2 2

int check_scope(int x, int y, int n, int m){
    return x>=0 && x<n && y>=0 && y<m;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin>>T;

    while(T--){
        int n,m;
        cin>>n>>m;
        char mat[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>mat[i][j];
            }
        }
        int x,y;
        cin>>x>>y;
        x--;  // 0-based index
        y--;

        bool allX = true;
        int dx[8] = {0,0,1,-1,1,1,-1,-1};
        int dy[8] = {1,-1,0,0,1,-1,1,-1};
        for(int i=0;i<8;i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(check_scope(nx,ny,n,m) && mat[nx][ny]=='.'){
                allX = false;
                break;
            }
        }
        if(allX){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }

    return 0;
}
