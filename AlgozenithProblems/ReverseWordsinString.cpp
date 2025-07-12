int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    string s;
    int flag = 0;
    while(cin>>s){
        reverse(s.begin(),s.end());
        if(flag){
            cout<<" ";
        }
        flag = 1;
        cout<<s;
    }

    return 0;
}
