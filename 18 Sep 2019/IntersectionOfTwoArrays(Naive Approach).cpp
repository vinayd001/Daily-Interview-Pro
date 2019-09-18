#include<bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> m;
        for(int i=0; i<nums1.size(); i++) {
            for(int j=0; j<nums2.size(); j++) {
                if(m[nums1[i]])
                    break;
                else if(!m[nums1[i]] && nums1[i]==nums2[j]) {
                    m[nums1[i]]=1;
                }
            }
        }
        vector<int> v;
        for(auto x: m) {
            if(x.second==1)
                v.push_back(x.first);
        }
        return v;
    }
};

int main() {

    int nums1Length, nums2Length;
    cin>>nums1Length>>nums2Length;
    vector<int> nums1;
    vector<int> nums2;
    for(int i=0; i<nums1Length; i++)
        cin>>nums1[i];
    for(int i=0; i<nums2Length; i++)
        cin>>nums2[i];
    vector<int> v = intersection(nums1, nums2);
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
}