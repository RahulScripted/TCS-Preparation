// Given a number find the sum of digits



#include <bits/stdc++.h>
using namespace std;


int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;

    int sum = 0, n = num;
    while(n > 0){
        int digit = (n % 10);
        sum += digit;
        n /= 10;
    }

    cout<<"Sum of "<<num<<" will be : "<<sum;
}