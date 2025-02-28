// Factorial of a number



#include <bits/stdc++.h>
using namespace std;

int fact(int num){
    int power = 1;
    for(int i = num;i >= 2;i--){
        power *= i;
    }
    return power;
}

int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;

    cout<<"Factorial of " <<num<<" will be : "<<fact(num);
}