#include<iostream>
using namespace std;
int main(){
    string address;
    cin >> address;
     string ans = "";
        for(char i : address){
            if(i == '.'){
                ans += "[.]";
            } else {
                ans += i;
            }
        }
        cout<< ans;
return 0;
}