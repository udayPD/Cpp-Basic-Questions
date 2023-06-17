#include<iostream>
using namespace std;

int main()
{
    cout << "Type your string you want to display:";
    string str;
    getline(cin, str);
    cout << str;
    return 0;
}