// Calculate sum of the elements of the array




#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {3,6,7,4,1,8};
    int sz = sizeof(arr) / sizeof(arr[0]);  

    int sum = 0;
    for(int i = 0;i < sz;i++){
        sum += arr[i];
    }

    cout<<"Sum of the elements will be : "<<sum;
}