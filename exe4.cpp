// c++ program
//conversion of binary to octal form

#include<iostream>
#include<math.h>
using namespace std;

//fucntion or code to run binary to octal form
int convert(long binary){

int octal =0, decimal =0, i=0,rem;

// logic converting binary to decimal form
while(binary != 0){

    rem = binary % 10;
    int res = rem * pow(2,i);
    decimal += res;
    i++;
    binary/= 10;

}
i= 1;

//logic of converting decimal to octal
while(decimal !=0){
    rem = decimal % 8;
    octal += rem *i;
    decimal /= 8;
    i*=10;

}
return octal;


}



int main(){

long binary;

//taking input
cout<<"enter a binary number you want to convert";
cin>>binary;

//calling function
int octal = convert(binary);

//printing output
cout<<binary<<"in binary = "<<octal<<"in octal form = ";

return 0;



}
