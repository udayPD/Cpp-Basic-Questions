// Paramaterised void function 
#include<iostream>
using namespace std;

void printName(string name){
    cout << "Hey " << name;
}
int main(){
    string name;
    cin >> name;
    printName(name);
}