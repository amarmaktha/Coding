// https://leetcode.com/problems/powx-n/

class Solution {
public:
    double myPow(double x, long int n) {
        if (n < 0){
            x = 1/x;
            n = -1*n;
        }
      
        if(n==0){
            return 1;
        }
       
        
        double ans = myPow(x,n/2);
        if(n%2 == 0){
             ans = ans*ans;
        }
        else{
             ans = ans*ans*x;
        }
        return ans;
      
    }
};
