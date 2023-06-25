// Pass by reference 
#include<iostream>
using namespace std;

int doSomething(int num){
    cout << num << endl;
    num += 5;
    cout << num <<endl;
    num += 5;
    cout << num << endl;
}

int main(){
    int num;
    cin >> num;
    doSomething(num);

}