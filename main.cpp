#include <iostream>
#include "functions.h"
using namespace std;

//This program prints hello and calculates factorial of a positive number

int main(){
    bool flg=true;
    print_hello();
    while (flg){
    int n;
    cout << "enter your number " << endl;
    cin>>n;
    if (n<0) { return -1;}
    flg = false;
    cout<< endl;
    cout << "The factorial of 5 is " << factorial(5) << endl;
    return 0;
    }
}
