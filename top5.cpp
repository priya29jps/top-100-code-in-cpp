//Program to find the Sum of Numbers in a given range

#include <iostream>
using namespace std;
int main()
{
int a,b;
int sum =0;
cout<<"enter the first  number of range \n";
cin>>a;

cout<<"enter the last  number of range \n";
cin>>b;
for(int i=a;i<= b;i++){
    
    sum = sum+i;
    
}

cout<<"sum of "<<sum <<endl;
return 0;

return 0;
}