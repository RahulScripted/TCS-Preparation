// Rotate array by K elements - Block Swap Algorithm




#include <bits/stdc++.h>
using namespace std;

void rotate(int arr[],int sz,int k){
    k %= sz;

    // First rotate Array from 0 to k
    int lo = 0, hi = (k - 1);
    while(lo < hi){
        swap(arr[lo],arr[hi]);
        lo++;
        hi--;
    }

    // Second rotate from k to sz - 1
    lo = k,hi = (sz - 1);
    while(lo < hi){
        swap(arr[lo],arr[hi]);
        lo++;
        hi--;
    }

    // Third rotate whole array
    lo = 0, hi = (sz - 1);
    while(lo < hi){
        swap(arr[lo],arr[hi]);
        lo++;
        hi--;
    }

    // Output
    cout<<"After rotating "<<k<<" elements it become : ";
    for(int i = 0;i < sz;i++) cout<<arr[i]<<" ";
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int sz = sizeof(arr) / sizeof(arr[0]);  

    int k;
    cout<<"Enter the value of k : ";
    cin>>k;

    rotate(arr,sz,k);
}