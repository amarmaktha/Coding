// https://leetcode.com/problems/generate-parentheses/

// Logic: no.of '(' >= no.of ')'.(must condition).
// if no.of '(' == n then rest all should be ')'   [total-size=2*n].
// else you have two choices either you put '(' or else ')'.

void func(int opb,int clb, int n,string s,int i){
        if(i == 2*n){
            ans.push_back(s);
            return ;
        }
        if(opb >= clb){
            if(opb == n){
                func(opb,clb + 1,n,s+')',i+1);
            }
            else{
                func(opb+1,clb,n,s+'(',i+1);
                func(opb,clb + 1,n,s+')',i+1);
            }
        }

    }
