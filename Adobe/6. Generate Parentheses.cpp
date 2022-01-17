// https://practice.geeksforgeeks.org/problems/generate-all-possible-parentheses/1/

class Solution
{
    public:
    
    void generate_paranthesis(string current,int open,int close,int n,vector<string>&v)
   {
       if(current.length()==2*n)
       {
           v.push_back(current);
       }
       if(open<n)
       generate_paranthesis(current+"(",open+1,close,n,v);
       if(close<open)
       generate_paranthesis(current+")",open,close+1,n,v);
   }
   
   vector<string> AllParenthesis(int n) 
   {
     vector<string> v;
     generate_paranthesis("(",1,0,n,v);
     return v;
   }
};
