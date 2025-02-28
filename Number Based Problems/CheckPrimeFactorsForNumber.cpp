// Print all prime factors of the given number





#include <bits/stdc++.h>
using namespace std;

bool checkPrime (int num){
    if(num < 2) return false;

    for(int i = 2;(i * i) <= num;i++){
        if(num % i == 0) return false;
    }

    return true;
}

void factorOfNum (int num){
    cout<<"Factors are : ";
    for(int i = 1;i <= num;i++){
        if(num % i == 0 && checkPrime(i)) cout<<i<<" ";
    }
}


int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;

    factorOfNum(num);
}