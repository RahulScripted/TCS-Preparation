// Prime Numbers in a given range




#include<bits/stdc++.h>
using namespace std;

bool checkPrime (int num){
    if(num < 2) return false;
    bool flag = true;
    for(int i = 2;(i * i) <= num;i++){
        if(num % i == 0){
            flag = false;
            break;
        }
    }

    if(flag) return true;
    else return false;
}

void checkPrimeRange(int start,int end){
    cout<<"Prime numbers are : ";
    for(int i = start;i <= end;i++){
        if(checkPrime(i)){
            cout<<i<<" ";
        }
    }
}

int main(){
    int start,end;
    cout<<"Enter starting point : ";
    cin>>start;
    cout<<"Enter ending point : ";
    cin>>end;

    checkPrimeRange(start,end);
}