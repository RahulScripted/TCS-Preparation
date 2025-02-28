// Check if a number is Palindrome or Not



#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(int num){
    int n = num, sum = 0, power = 1;
    while(n > 0){
        int digit = n % 10;
        sum = (sum * 10) + digit;
        n /=10;
    }

    if(sum == num) return true;
    else return false;
}

int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;

    if(checkPalindrome(num)) cout<<num<<" is a palindrome number";
    else cout<<num<<" is not a palindrome number";
}