//Program to check whether a year is a leap year or not


#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter the number you want to check";
    cin >> a;
if(((a%4 ==0)&& (a%100 !=0)) ||(a%400 ==0))
{
    cout<<a<<"is leap year"<<endl;
}
else{
    cout<<a<<"is not leap year"<<endl;
}
return 0;
}