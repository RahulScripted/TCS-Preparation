// Sum of numbers in the given range




#include<bits/stdc++.h>
using namespace std;

long long findSum(int start,int end){
    long long sum = 0;
    for(int i = start;i <= end;i++){
        sum += i;
    }
    return sum;
}

int main(){
    int start,end;

    cout<<"Enter starting point : ";
    cin>>start;

    cout<<"Enter ending point : ";
    cin>>end;

    cout<<"Sum of the range from "<<start<<" to "<<end<<" will be : "<<findSum(start,end);
}