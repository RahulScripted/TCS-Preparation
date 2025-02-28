// Generate a fibonacci series for n natural numbers



#include<bits/stdc++.h>
using namespace std;

void generateFibonacci(int num){
    int first = 0,second = 1;
    cout<<"Fibonacci Series will be : "<<first<<" "<<second<<" ";
    for(int i = 2;i < num;i++){
        int temp = first + second;
        first = second;
        second = temp;
        cout<<second<<" ";
    }
}

int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;

    generateFibonacci(num);
}