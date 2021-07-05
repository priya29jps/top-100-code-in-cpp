//Sum of First N Natural numbers


#include <iostream>
using namespace std;
int main()
{
int n;
int sum =0;
cout<<"enter the nth number till that you want some\n ";
cin>>n;
cout<<"the nth number is \n";
for(int i=0;i<= n;i++){
    
    sum = sum+i;
    
}

cout<<"sum of "<<n<<"is :"<<sum <<endl;
return 0;
}