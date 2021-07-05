
//C++ program
//Greatest of three numbers
#include <iostream>
using namespace std;
//main program
int main()
{
    int first, second,third;
    cout <<"Enter first number : ";
    cin >> first;
    cout <<"Enter second number : ";
    cin >> second;
    cout <<"Enter third number : ";
    cin >> third;
    if (first == second && first == third && second == third)
    {
        cout <<"All are equal";
    }
    else if (first > second && first > third )
    {
        cout << first <<" is greater than "<< second<< "and"<<third;
    }

    else if (second > first && second > third )
    {
        cout << second <<" is greater than "<< first<< "and"<<third;
    }

    else if (third > first && second < third )
    {
        cout << third <<"is greater than "<< first<< "and"<<second;
    }
    else {
        cout<<"invalid code";
    }
    
    return 0;
}
