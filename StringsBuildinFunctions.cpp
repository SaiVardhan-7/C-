#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1;                  // empty string
    string s2 = "hello";        // initialization
    string s3(s2);              // copy constructor
    string s4(5, 'a');          // "aaaaa"



    // CAPACITITY AND SIZE
    string s = "Sai Vardhan";
    cout<<s.size()<<endl;   // 11 Returns the number of characters
    cout<<s.length()<<endl; // 11

    cout<<s.capacity()<<endl;  // Returns size of storage space

    s.resize(20);     // Resizes string in n characters here(n = 20)

    cout<<s.empty()<<endl;   // Checks if the string is empty

    s.shrink_to_fit();     // Reduces capacity to fit size
    cout<<s.capacity()<<endl;   // 20

    s.clear();   // Clears the content of the string



    // ELEMENTS ACCESS
    s = "Sai Vardhan";
    cout<<s[0]<<" "<<s[1]<<" ...."<<endl;   // Access character at index i
    
    cout<<s.at(0)<<" "<<s.at(1)<<" ...."<<endl;   // Safe access with bound check

    cout<<s.front()<<endl;   // First character
    cout<<s.back()<<endl;   // Last character



    // MODIFIERS
    string str = " Katta";
    s.append(str);           // Appends str to current string
    cout<<s<<endl;   // Sai Vardhan Katta

    str.push_back('H');    // Adds character at end
    cout<<str<<endl;   //  KattaH

    str.pop_back();    // Removes last character

    str.insert(0,"Sai ");   // insert(pos,str) -> inserts str at position pos
    cout<<str<<endl;   // Sai Katta

    str.erase(0,5);   // erase(pos,len) -> Erases len characters from pos
    cout<<str<<endl;   // Katta

    str.replace(0,5,"Katta Hima Chandra Sai Vardhan");   // replaces(pos,len,str)
    cout<<str<<endl;                                     // Replaces part with str

    str.swap(s);
    cout<<s<<endl;   // Katta Hima Chandra Sai Vardhan
    cout<<str<<endl; // Sai Vardhan Katta

    str.assign("Sai");   // Assigns new value
    cout<<str<<endl;   // Sai



    // STRING OPERATIONS
    string str1 = "Satyanarayana";
    
    cout<<str1.substr(5,14)<<endl;   // narayana // Returns substring

    cout<<str1.compare(str)<<endl;  // 1  // Compares strings (returns <0,0,>0)

    cout<<str1.find("ya")<<endl;   // 3 // Finds first occurrence of str

    cout<<str1.rfind("ya")<<endl;   // 9 // Finds last occurrence



    // RELATIONAL OPERATORS
       // You can use ==, !=, <, >, <=, >= directly on strings.


    
    // NON-MEMBER FUNCTIONS
    string s5;
    cout<<"Enter the string : ";
    // getline(cin,s5);   // Reads line including spaces
    
    string s6 = to_string(65);   // Converts number to string
    cout<<s6<<endl;   // 65

        // STOI  ->  Converts string to integer
    string st = "123";
    int num = stoi(st);
    cout<<num<<endl;   // 123

    string hexStr = "1A";
    int num1 = stoi(hexStr,0,16);   // stoi(str,0,base)
    cout<<num1<<endl;   // 26

    string st1 = "45kg";
    size_t pos;
    int num2 = stoi(st1,&pos);
    cout<<num2<<", next char: "<<st1[pos];   //45, next char: k
    // stol, stoll, stof, stod, stold are other conversions

    return 0;
}