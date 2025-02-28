// Find the largest number in an array




#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {3,6,12,7,4,1,8};

    int maxi = INT_MIN;
    int sz = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0;i < sz;i++){
        if(maxi < arr[i]) maxi = arr[i];
    }

    cout<<"Maximum value will be : "<<maxi;
}