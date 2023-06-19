#include<iostream>
using namespace std;

void saymyName(string s){
    s[1] = 'm';
    cout << s << endl;
}

int main(){
    
    string s = "Uday";
    saymyName(s);
    cout << s << endl;


}