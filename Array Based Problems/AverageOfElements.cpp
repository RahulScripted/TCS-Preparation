// Average of all elements in an array




#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {3,6,4,4,1,8};
    int sz = sizeof(arr) / sizeof(arr[0]);  

    int sum = 0;
    for(int i = 0;i < sz;i++){
        sum += arr[i];
    }

    double avg = (sum / (double)sz);
    cout<<"Average of elements will be : "<<avg;
}