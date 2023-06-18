/* Using concepts of switch case whick takes :
two number and 1 operand as input and displays the operation
result to the user */
#include<iostream>
using namespace std;
int main()
{
    char op;
    int num1, num2;

    cout << "Enter the operator +, -, *, / :";
    cin >> op;

    cout << "Enter the two operands num1 and num2:";
    cin >> num1 >> num2;

    switch(op){

        case '+' :
        cout << num1 << "+" << num2 << endl << num1 + num2 ;
        break;

        case '-' :
        cout << num1 << "-" << num2 << endl << num1 - num2;
        break;

        case '*':
        cout << num1 << "*" << num2 << endl << num1 * num2;
        break;

        case '/':
        cout << num1 << "/" << num2 << endl << num1 / num2 ;
        break;

        default:
        cout << "Enter a valid operand !!";

        return 0;

    }


}