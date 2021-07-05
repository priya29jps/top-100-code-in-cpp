//Prime number:

#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter the number you want to check";
    cin >> a;
if(a % 1 ==0 && a % 2 ==0 ||a % 3 ==0 ||a % 6 ==0 ){
    cout<<a<<" not a prime number"<<endl;

}
else if(a % 1 ==0 && a % a ==0){
    cout<<a<<" a prime number"<<endl;

}
else{
    cout<<"invalid option";
}
return 0;
}