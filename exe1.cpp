//c++ program
// LCM program

#include <iostream>
using namespace std;

int findlcm(int ,int);
int main()
{
    int first,second;
    cout<<"enter first number";
    cin>>first;
    cout<<"enter the second number";
    cin>>second;

    //calling the function to find lcm
cout<<findlcm(first,second)<<"is the LCM of two number\n";
return 0;

}

//function to find lcm
int findlcm(int first,int second)
{
static int fact = first;
//if true then fact is the lcm
if(fact % first ==0 && fact % second ==0)
{
    return fact;
}

//if false call function again
else
{
fact = fact + first;
findlcm(first,second);


}
return fact;
}
