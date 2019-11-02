#include<iostream>
#include<vector>
#include<map>
using namespace std;

bool find_target (vector<int> arr, int target) {
    map<int, int> hash_map;
    for(int i=0; i<arr.size(); i++) {
        int complement = target - arr[i];
        if(hash_map[complement])
            return true;
        hash_map[arr[i]] = i;
    }
    return false;
}

int main( ) {
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int target;
    cin>>target;
    cout<<find_target(arr, target);
}