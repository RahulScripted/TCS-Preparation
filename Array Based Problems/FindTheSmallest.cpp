// Find the smallest number in an array




#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {3,6,12,7,4,1,8};

    int mini = INT_MAX;
    int sz = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0;i < sz;i++){
        if(mini > arr[i]) mini = arr[i];
    }

    cout<<"Minimum value will be : "<<mini;
}