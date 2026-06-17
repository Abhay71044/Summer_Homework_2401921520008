#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans(nums2.size());
        stack<int>st;
 
        st.push(-1);
        for(int i=nums2.size()-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums2[i]){
                st.pop();
            }
            if (st.empty()) ans[i] = -1;
            else ans[i] = st.top();
            st.push(nums2[i]);
        }
        vector<int>ans2(nums1.size());
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    ans2[i]=ans[j];
                }
            }
        }
        return ans2;
    }
};
