// Express given number as Sum of Two Prime Numbers




#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int num){
    for(int i = 2;(i * i) <= num;i++){
        if(num % i == 0) return false;
    }

    return true;
}

void canExpress(int num){
    cout<<"If we express "<<num<<" as a sum of two prim number then it will be : ";

    for(int i = 2;i < num;i++){
        if(checkPrime(i) && checkPrime(num - i)){
            cout<<i<< " and "<<(num - i);
            return;
        }
    }
    cout<<"Can't possible";
}

int main(){
    int num;
    cout<<"Enter num : ";
    cin>>num;

    canExpress(num);
}