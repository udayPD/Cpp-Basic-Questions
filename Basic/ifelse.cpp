//Write a program which takes inout as age and tells
//whether you are adult or not 
#include<iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter your age:";
    cin >> age;

    if (age >= 18)
    {
        cout << "You are an adult!!!!" <<endl;      
    }
    else
    {
        cout << "You are not an adult!!!";
    }
    

}