// Paramaterised void function 
#include<iostream>
using namespace std;

void printName(string name){
    cout << "Hey " << name << endl;
}
int main(){
    string name;
    cin >> name;
    printName(name);

    // reusability of code 
    string name2;
    cin >> name2;
    printName(name2);
}