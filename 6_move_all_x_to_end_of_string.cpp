#include<iostream>
using namespace std;
string movetoend(string s){
    if(s.length()==0){
        return "";
    }
    char ch = s[0];
    string ans = movetoend(s.substr(1));
    if(ch=='b'){
        return ans+ch;
    }
    return ch+ans;
}

int main(){
    //char b ='b';
    cout<<movetoend("bhhhushan");
    return 0;
}