/* Take the day no and print the corresponding day 
 1 for printing Monday
 2 for Tuesday
 3 for wednesday and so on */
 #include<iostream>
 using namespace std;
 int main()
 {
    int day;
    cout << "Enter the number:";
    cin >> day;

    switch(day)
    {
        case 1:
        cout << "Monday";
        break;
        case 2:
        cout << "Tuesday";
        break;
        case 3:
        cout << "Wednesday";
        break;
        case 4:
        cout << "Thursday";
        break;
        case 5:
        cout << "Friday";
        break;
        case 6:
        cout << "Saturday";
        break;
        case 7:
        cout << "Sunday";
        break;

        default:
        cout << "Enter a valid number";
    
    }
 }