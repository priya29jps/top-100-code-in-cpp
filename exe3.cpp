//c++ program
//convert binary to decimal

#include<iostream>
#include<math.h>
using namespace std;

//function to convert binary_function to decimal function

int convert(long n){
int i=0,decimal =0;
//converting binary to decimal
while(n!=0)
{
    int rem = n%10;
    n/= 10;
    int res = rem * pow(2,i);
    decimal += res;
    i++;
}
return decimal;
}


//main program
int main()
{
    long binary;
    cout<<"enter binary number /n";
    cin>>binary;
    cout<<binary<<"in binary"<<convert(binary)<<"in decimal";
    return 0;

}



