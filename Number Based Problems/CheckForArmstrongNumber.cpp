// Check if a number is an armstrong number of not



#include<bits/stdc++.h>
using namespace std;

int power(int digit, int len){
    int val = 1;
    while(len > 0){
        val *= digit;
        len--;
    }
    return val;
}

int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;


    int len = 0, n = num;
    while(n > 0){
        len++;
        n /= 10;
    }

    int sum = 0;
    n = num;
    while(n > 0){
        int digit = n % 10;
        sum += power(digit,len);
        n /= 10;
    }

    if(sum == num) cout<<num<<" is an armstrong number";
    else cout<<num<<" is not an armstrong number";
}