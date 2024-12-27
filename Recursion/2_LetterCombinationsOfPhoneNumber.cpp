// https://leetcode.com/problems/letter-combinations-of-a-phone-number/
class Solution {
public:
    void func(string digits,int i,string s,vector<string>&ans,unordered_map<char,vector<char>>&mp){
        if(i==digits.size()){
            ans.push_back(s);
            return;
        }
        for(int j=0;j<mp[digits[i]].size();j++){
            func(digits,i+1,s+mp[digits[i]][j],ans,mp);
        }
        
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0){
            return {};
        }
        vector<string>ans;
        unordered_map<char,vector<char>>mp;
        mp['2']={'a','b','c'};
        mp['3']={'d','e','f'};
        mp['4']={'g','h','i'};
        mp['5']={'j','k','l'};
        mp['6']={'m','n','o'};
        mp['7']={'p','q','r','s'};
        mp['8']={'t','u','v'};
        mp['9']={'w','x','y','z'};
        string s;
        int i=0;
        func(digits,i,s,ans,mp);
        return ans;
    }
};
