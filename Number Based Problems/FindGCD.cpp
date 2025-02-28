// Find GCD of two numbers



#include <bits/stdc++.h>
using namespace std;

int findGCD(int num1,int num2){
    while(num1 > 0 && num2 > 0){
        if(num1 > num2) num1 %= num2;
        else num2 %= num1;
    }

    if(num1 == 0) return num2;
    return num1;
}

int main(){
    int num1,num2;
    
    cout<<"Enter first number : ";
    cin>> num1;
    
    cout<<"Enter second number : ";
    cin>> num2;

    cout<<"GCD of "<<num1<<" and "<<num2<<" is : "<<findGCD(num1,num2);
}