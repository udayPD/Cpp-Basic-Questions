/* See the output here since we have used &s as pass by reference we can see that the entire original value is transfered 
to the string */

// PASS BY REFERENCE 

#include<iostream>
using namespace std;

void myName(string &s){
    s[1]='G';
    cout << s << endl;
}

int main(){
    string s = "UDAY";
    myName(s);
    cout << s << endl;


}