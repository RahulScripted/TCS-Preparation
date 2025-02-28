// Reverse a given array



#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {3,6,12,7,4,1,8};
    int sz = sizeof(arr) / sizeof(arr[0]);

    int lo = 0, hi = (sz - 1);
    while(lo < hi){
        swap(arr[lo], arr[hi]);
        lo++;
        hi--;
    }

    cout<<"After reversing it will be : ";
    for(int i = 0;i < sz;i++) cout<<arr[i]<<" ";
}