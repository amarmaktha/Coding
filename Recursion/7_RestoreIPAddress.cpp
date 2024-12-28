//https://leetcode.com/problems/restore-ip-addresses/
// LOGIC 1: dots ko place kro such that jaha pe bhi place kroge woh valid hona chahiye.
// LOGIC 2: Use simple 4 FOR loops to iterate.


class Solution {
public:

vector<string>ans;
bool validString(string s2){
    if(s2.size()!=1 && s2[0]=='0'){
        return 0;
    }
    long long  num=stoll(s2);
    
    if(num > 255 ){
        return 0;
    }
    return 1;
}
void func(string s, string curr, int i, int c){
    if(c>3){
        if(i==s.size()){
            ans.push_back(curr);
            return;
        }
        return;
    }
    string s1="";
    if(curr.size()!=0){
        curr.push_back('.');
    }
    for (int j=i;j<i+3 && j<s.size();j++){
        s1.push_back(s[j]);
        if(validString(s1)){
            func(s, curr+s1, j+1, c+1);
        }
        
        
    }
    return ;
}
    vector<string> restoreIpAddresses(string s) {
            if (s.size() > 12) return {};
            string curr="";
            int c=0;
            func(s, curr , 0, c);
            return ans;
    }
};
