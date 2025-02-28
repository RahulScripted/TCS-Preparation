// Check whether a number is positive or negative or zero



#include <bits/stdc++.h>
using namespace std;


int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;

    if(num > 0) cout<<num<<" is a positive number";
    else if(num < 0) cout<<num<<" is a negative number";
    else cout<<num<<" is equal to zero";
}