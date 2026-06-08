#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>frq(26,0);
        for(char ch:magazine){
            frq[ch-'a']++;
        }
        for(char ch:ransomNote){
            if(frq[ch-'a']==0){
                return false;
            }
            frq[ch-'a']--;
        }
        return true;
    }
};