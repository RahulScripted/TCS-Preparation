// Rearrange array in increasing-decreasing order




#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {3,6,7,4,1,8};
    int sz = sizeof(arr) / sizeof(arr[0]);

    sort(arr,arr + sz);
    int lo = sz / 2, hi = sz - 1;
    while(lo < hi){
        swap(arr[lo],arr[hi]);
        lo++;
        hi--;
    }

    cout<<"After rearrange in increasing decreasing order : ";
    for(int i = 0;i < sz;i++) cout<<arr[i]<<" ";
}