#include<stdio.h>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<int,int> mp;
        for(auto val:s){
            mp[val]++;
        }
        for(int i=0;i<s.length();i++){
            if(mp[s[i]]==1)
                return i;
        }
        return -1;
    }
};