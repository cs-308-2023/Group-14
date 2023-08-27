#include<iostream>
#include "functions.h"
using namespace std;

int gcd(int a, int b){
    int gcd;
    for(int i=1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0)
            gcd = i;
    }
    return gcd;
}

int gcd_rec(int a,int b){
    if(a%b==0) return 0;
    return gcd_rec(b,a%b);
}
