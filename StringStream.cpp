#include<bits/stdc++.h>
using namespace std;

// Convert String to Integer/Float
void f1(){
    string str = "123";
    int num;
    stringstream ss;
    ss << str;
    ss >> num;
    cout << num + 10 << endl;  // Output: 133
}

// Convert Integer to String
void f2(){
    int num = 42;
    stringstream ss;
    ss << num;
    string str;
    ss >> str;
    cout << str << endl;  // Output: "42"
}

// Parse Space-Separated Words
void f3(){
    string input = "hello world this is c++";
    stringstream ss;
    ss << input;

    string word;
    while (ss >> word) {
        cout << word << endl;
    }
    //           OR
    // while(getline(ss,word,' ')){
    //     cout<< word <<endl;
    // }
}

// Split String by Comma (Custom Delimiter)
void f4(){
    string data = "10,20,30";
    stringstream ss;
    ss << data;

    string token;
    while(getline(ss,token,',')){
        cout<<token<<endl;
    }
}

// Multiple Value Extraction
void f5(){
    string input = "25 3.14 John";
    stringstream ss;
    ss << input;

    int age;
    float pi;
    string name;

    ss >> age >> pi >> name;

    cout<<age<<" "<<pi<<" "<<name<<endl;
}

// Reset/Reuse the Same stringstream
void f6(){
    stringstream ss;
    ss << "100";
    int x;
    ss >> x;

    ss.clear();   // clear flags
    ss.str("");   // reset string

    ss << "200";
    ss >> x;
    cout << x << endl;   // output : 200
}

// Using .str() to Get Full String
void f7(){
    ostringstream oss;
    oss << "Hello " << 2025;
    string result = oss.str();   // "Hello 2025"
    cout<<result<<endl;
}

// Custom Struct Parsing Example
void f8(){
    struct Student{
        string name;
        int age;
    };

    string line = "Alice 22";
    stringstream ss;
    ss << line;
    Student s;
    ss >> s.name >> s.age;
    cout<<s.name<<" "<<s.age<<endl;
}

// Performance Tip
void f9(){
    ostringstream oss;
    for(int i=0;i<1000;i++){
        oss << i << " ";
    }
    string result = oss.str();
    cout<<result<<endl;
}

int main(){
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();

    return 0;
}