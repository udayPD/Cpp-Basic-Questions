#include<iostream>
using namespace std;

void doSomething(int arr[], int n){
    arr[0] += 100;
    cout << "value stored inside function:"<<arr[0]<< endl;
}

int main() {
    int n = 5;
    int arr[n];
    for (int i=0;i<=n;i=i+1){
        cin >> arr[i];
    }

    doSomething(arr[i]);
    cout << "Value stored in int main:" << arr[i];

}