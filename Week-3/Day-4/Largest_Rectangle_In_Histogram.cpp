#include <bits/stdc++.h>
using namespace std;
 
class Solution {
public:

    vector<int> nextSmallerElement(vector<int>& s){
    vector<int>ans(s.size());
    stack<int>st;
    st.push(-1);
    for(int i=s.size()-1;i>=0;i--){
        int curr=s[i];
        while(st.top()!=-1 && s[st.top()]>=curr){
        st.pop();
        }
        ans[i]=st.top();
        st.push(i);
    }
    return ans;
    }

    vector<int> prevSmallerElement(vector<int>s){
    vector<int>ans(s.size());
    stack<int>st;
    st.push(-1);
    for(int i=0;i<s.size();i++){
        int curr=s[i];
        while(st.top()!=-1 && s[st.top()]>=curr){
        st.pop();
        }
        ans[i]=st.top();
        st.push(i);
    }
    return ans;
    }

    int largestRectangleArea(vector<int>& heights) {
        vector<int>prev=prevSmallerElement(heights);
        vector<int>next=nextSmallerElement(heights);
        int maxarea=INT_MIN;
        int size=heights.size();

        for(int i=0;i<heights.size();i++){
            int length=heights[i];
            if(next[i]==-1){
            next[i]=size;
            }
            int width=next[i]-prev[i]-1;
            int area=length*width;
            maxarea=max(maxarea,area);

        }
        return maxarea;
    }
};
