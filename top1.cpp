//Program to Check whether a number is Positive or Negative

#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter the number you wnat to check";
    cin >> a;
    if (a == 0)
    {
        cout << "enter number" << a << "is neutral \n";
    }
    else if(a > 0)
    {
        cout << "enter number" << a << "is postive \n";
    }
    else
    {
        cout << "enter number" << a << "is negative \n";
    }

    return 0;
}
