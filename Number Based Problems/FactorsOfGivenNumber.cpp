// Factors of a given number



#include <bits/stdc++.h>
using namespace std;

void factorOfNum (int num){
    cout<<"Factors are : ";
    for(int i = 1;i <= num;i++){
        if(num % i == 0) cout<<i<<" ";
    }
}


int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;

    factorOfNum(num);
}