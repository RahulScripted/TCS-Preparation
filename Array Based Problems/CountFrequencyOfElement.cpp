// Count frequency of each element in an array



#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {3,6,8,7,4,1,8};
    int sz = sizeof(arr) / sizeof(arr[0]);

    unordered_map<int,int>mp;
    for(int i = 0;i < sz;i++) mp[arr[i]]++;

    for(auto x : mp){
        cout<<x.first<<" -> "<<x.second<<endl;
    }
}