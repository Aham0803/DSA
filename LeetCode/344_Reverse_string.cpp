#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str = "apna college";
    string og = str;
    // reverse(str.begin() , str.end());
    reverse(str.begin() , str.end());
    if(og == str){
        cout << "palindrome";
    }
    else{
        cout << "not palindrome";
    }
    // cout << str<<endl;
return 0;
}