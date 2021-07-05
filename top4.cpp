//Sum of N natural numbers

#include <iostream>
using namespace std;
int main()
{
int n;
int sum =0;
cout<<"enter the number";
cin>>n;
for(int i =0;i<= n;i++)
{
sum = n * (n+1)/2;
//cout<<sum;
}
cout<<sum<<endl;
return 0;
}