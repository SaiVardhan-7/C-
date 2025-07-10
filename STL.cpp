#include<bits/stdc++.h>
using namespace std;

void explainPair(){
    pair<int,int> p1 = {1,3};
    cout<<p1.first<<" "<<p1.second<<endl;    // 1 3

    pair<int,pair<int,int>> p2 = {4,{7,5}};
    cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<endl;   // 4 7 5

    pair<int,int> arr[] = {{1,2},{3,4},{5,6}};
    for(auto val : arr){
        cout<<val.first<<" "<<val.second<<endl;
    }   // 1 2
        // 3 4
        // 5 6
}

void explainVector(){
    vector<int> v;
    v.push_back(1);     // v = {1}
    v.emplace_back(2);  // v = {1,2} 
    v.push_back(3);     // v = {1,2,3}
    for(int i : v){
        cout<<i<<" ";     //1 2
    }
    cout<<endl;
    cout<<v[1]<<endl;
    cout<<v.front()<<" "<<v.back()<<endl;


    vector<pair<int,int>> vec;
    vec.push_back({1,2});    // vec = {{1,2}}
    vec.emplace_back(3,4);   // vec = {{1,2},{3,4}}
    for(auto i : vec){
        cout<<i.first<<" "<<i.second<<endl;      // 1 2
    }                                            // 3 4


    vector<int> v1(5,100);     // v1 = {100,100,100,100,100}
    for(int i : v1){
        cout<<i<<" ";
    }
    cout<<endl;

    vector<int> v2(v1);    // It is going copy the v1 vector, v2 = {100,100,100,100,100}
                           
    vector<int> v3(5);     // v3 = {0,0,0,0,0}

    

    // ITERATOR 
    vector<int> v4 = {1,2,3,4,5,6,7};
    for(vector<int>::iterator it=v4.begin();it!=v4.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    // OR
    for(auto it=v4.begin();it!=v4.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    // OR
    for(auto val : v4){
        cout<<val<<" ";
    }
    cout<<endl;

    // Reverse order
    for(auto it=v4.rbegin();it!=v4.rend();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;


    v4.erase(v4.begin()+1);     // {1,3,4,5,6,7}
    v4.erase(v4.begin()+2,v4.begin()+4);   // {1,3,6,7}
    
    // Insert function
    v4.insert(v4.begin(),300);    // (pos,num)  {300,1,3,6,7}
    v4.insert(v4.begin()+1, 2 , 10);  // (pos,cnt of num,num) {300,10,10,1,3,6,7}

    v4.insert(v4.begin(),v.begin(),v.end()); // {1,2,3,300,10,10,1,3,6,7}
   
    cout<<v4.size()<<endl;   // 10

    v4.pop_back();

    v4.swap(v);
    // v = {1,2,3,300,10,10,1,3,6,7}
    // v4 = (1,2,3)
    
    v4.clear();

    cout<<v.empty();  // prints '1' if it is empty, otherwise '0'
}

void explainList(){
    list<int> ls;

    ls.push_back(2);   // {2}
    ls.emplace_back(4);  //  {2,4}

    ls.push_front(5);   // {5,2,4}
    ls.emplace_front(1); // {1,5,2,4}

    ls.pop_back();   // {1,5,2}
    ls.pop_front();  // {5,2}

    for(auto i : ls){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<ls.back()<<endl;
    cout<<ls.front()<<endl;


    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}

void explainDeque(){
    deque<int> dq;

    dq.push_back(2);   // {2}
    dq.emplace_back(4);  //  {2,4}

    dq.push_front(5);   // {5,2,4}
    dq.emplace_front(1); // {1,5,2,4}

    dq.pop_back();   // {1,5,2}
    dq.pop_front();  // {5,2}

    for(auto i : dq){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<dq.back()<<endl;
    cout<<dq.front()<<endl;

    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}

void explainStack(){
    stack<int> st;
    st.push(1);   // {1}
    st.push(2);   // {2,1}
    st.push(3);   // {3,2,1}
    st.push(3);   // {3,3,2,1}
    st.emplace(5); //{5,3,3,2,1}

    cout<<st.top()<<endl;   // prints 5  (st[2] is invalid)

    st.pop();   // {3,3,2,1}

    cout<<st.top()<<endl;   // 3
    cout<<st.size()<<endl;  // 4
    cout<<st.empty()<<endl; // 0 

    stack<int>st1;
    st1.swap(st);
}

void explainQueue(){
    queue<int> q;
    q.push(1);   // {1}
    q.push(2);   // {1,2}
    q.emplace(4);   // {1,2,4}

    q.back() += 5;   // {1,2,9}

    cout<<q.back()<<endl;  // 9
    cout<<q.front()<<endl;   // 1

    q.pop();   // {2,9}

    // size, swap, empty same as stack
}

void explainPQ(){
    priority_queue<int> pq;

    pq.push(5);   // {5}   [ push,pop --> O(logn) ]
    pq.push(2);   // {5,2}
    pq.push(8);   // {8,5,2}
    pq.emplace(10);   // {10,8,5,2}

    cout<<pq.top()<<endl;  // 10

    pq.pop();   // {8,5,2}

    cout<<pq.top()<<endl;   // 8
    // size, swap, empty functions are same as others

    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> mpq;
    mpq.push(5);   // {5}   
    mpq.push(2);   // {2,5}
    mpq.push(8);   // {2,5,8}
    mpq.emplace(10);   // {2,5,8,10}

    cout<<mpq.top()<<endl;   // 2
}

void explainSet(){    // Sorted Unique
    set<int> st;
    st.insert(1);   // {1}
    st.emplace(2);   // {1,2}
    st.insert(2);   // {1,2}
    st.insert(4);   // {1,2,4}
    st.insert(3);   // {1,2,3,4}

    // functionality of insert in vector can be used also, 
    // that only increases efficiency

    // begin(), end(), rbegin(), rend(), size(),
    // empty() and swap() are same

    // {1,2,3,4}
    auto it = st.find(3);   // iterator will point to 3

    auto it1 = st.find(6);   // iterator will point to st.end()

    st.erase(4);   // {1,2,3}  // takes logarithmic time

    int cnt = st.count(2);   // if 2 exists then it returns 1, otherwise 0

    auto it2 = st.find(3);
    st.erase(it2);   // takes constant time

    // if {1,2,3,4,5}
    auto it3 = st.find(2);
    auto it4 = st.find(4);
    st.erase(it3,it4);    // (first, last)

    // lower_bound() and upper_bound() function works in the same way
    // as in vector it does.

    // This is the syntax
    auto it5 = st.lower_bound(2);
    auto it6 = st.upper_bound(3);
}

void explainMultiSet(){   // Sorted but not unique
    multiset<int> ms;
    ms.insert(1);   // {1}
    ms.insert(1);   // {1,1}
    ms.insert(1);   // {1,1,1}

    ms.erase(1);   // all 1's erased

    int cnt = ms.count(1);   // counts the no.of 1's

    // only a single one erased
    ms.erase(ms.find(1));

    // rest all functions are same as set
}

void explainUSet(){
    unordered_set<int> st;
    // lower_bound and upper_bound functions does not works,
    // rest all functions are same as above, it does not stores 
    // in any particular order it has a better complexity than 
    // set in most cases, except some when collison happens
}

void explainMap(){
    // stores unique keys in sorted order
    // map<key,value>
    map<int,int> mpp;
    map<int,pair<int,int>> mpp1;
    map<pair<int,int>,int> mpp2;

    mpp[1] = 2;    // [{1,2}]
    mpp.insert({2,4});   // [{1,2},{2,4}]

    mpp2[{2,3}] = 10;

    for(auto it : mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout<<mpp[1]<<endl;   // 2
    cout<<mpp[5]<<endl;   // 0 since it does not exists

    auto it = mpp.find(2);
    cout<<it->second<<endl;    // 4

    auto it1 = mpp.find(5);   // It points to mpp.end(), since 5 does not exists

    auto it2 = mpp.lower_bound(2);
    auto it3 = mpp.upper_bound(3);

    // erase, swap, size, empty are same as above
}

void explainMultiMap(){
    // everything same as map, only it can store multiple keys 
    // only mpp[key] cannot be used here
}

void explainUnorderedMap(){
    // same as set and unordered_set difference.
}

bool comp(pair<int,int>p1, pair<int,int>p2){
    if(p1.second < p2.second){
        return true;
    }
    else if(p1.second == p2.second){
        if(p1.first > p2.second)   return true;
    }
    return false;
}

void explainAlgo(){
    int arr[6] = {3,2,5,6,1,4};
    vector<int> v = {3,5,6,1,2,4}; 

    int n = sizeof(arr)/sizeof(int);
    sort(arr, arr+n);   
    sort(arr+2, arr+4);   // sort some range of arr

    sort(arr, arr+n, greater<int>());   // sort in descending order

    pair<int,int> a[] = {{1,2},{2,1},{4,1}};
    // sort it according to second element
    // if second element is same, then sort
    // it according to first element but in descending

    sort(a,a+3,comp);   // {{4,1},{2,1},{1,2}}

    int num = 7;    // binary->111
    int cnt = __builtin_popcount(num);   // counts no.of 1's in binary
    cout<<cnt<<endl;   // 3

    long long num1 = 165786578687;
    int cnt1 = __builtin_popcountll(num1);
    cout<<cnt1<<endl;

    string s = "123";
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(), s.end()));   
    // It is going to print all the permutations 

    int maxi = *max_element(arr,arr+n);   // 6
    int mini = *min_element(arr,arr+n);   // 1
}

int main(){
    // explainPair();
    // explainVector();
    // explainList();
    // explainDeque();
    // explainStack();
    // explainQueue();
    // explainPQ();
    // explainSet();
    // explainMultiSet();
    // explainUSet();
    // explainMap();
    // explainMultiMap();
    // explainUnorderedMap();
    // explainAlgo();

    return 0;
}
