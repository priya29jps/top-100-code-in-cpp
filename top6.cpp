//C++ program
//Greatest of two numbers
#include <iostream>
using namespace std;
//main program
int main()
{
    int first, second;
    cout <<“Enter first number : “;
    cin >> first;
    cout <<“Enter second number : “;
    cin >> second;
    if (first == second)
    {
        cout <<“both are equal”;
    }
    else if (first > second)
    {
        cout << first <<” is greater than “<< second;
    }
    else
    {
        cout << second <<” is greater than “<< first;
    }
    return 0;
}
