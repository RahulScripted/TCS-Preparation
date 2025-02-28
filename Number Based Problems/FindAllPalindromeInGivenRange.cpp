// Find all Palindrome Numbers in a given range


#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(int num){
    int n = num,sum = 0;
    while(n > 0){
        int digit = n % 10;
        sum = (sum * 10) + digit;
        n /= 10;
    }

    if(sum == num) return true;
    else return false;
}

void checkPalindromeRange(int start,int end){
    cout<<"Palindrome numbers are : ";
    for(int i = start;i < end;i++){
        if(checkPalindrome(i)) cout<<i<<" ";
    }
}

int main(){
    int start, end;
    cout<<"Enter starting point : ";
    cin>>start;
    cout<<"Enter ending point : ";
    cin>>end;

    checkPalindromeRange(start,end);
}