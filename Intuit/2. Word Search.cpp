// https://practice.geeksforgeeks.org/problems/word-search/1/

class Solution {
public:
    
    void solve(vector<vector<char>>& board,string & word,int i,int j,int &f,int curr,vector<vector<int>>& vi,int m,int n){
        if(f==1 || i<0 || i>=n || j<0 || j>=m || board[i][j]!=word[curr] || vi[i][j]==1) return;
        
        if(curr==(word.length()-1)) {
            //cout<<"hi";
            f=1;
            return;
        }
        
        vi[i][j]=1;
       // cout<<"hi";
            
        solve(board,word,i+1,j,f,curr+1,vi,m,n);
        solve(board,word,i,j+1,f,curr+1,vi,m,n);
        solve(board,word,i-1,j,f,curr+1,vi,m,n);
        solve(board,word,i,j-1,f,curr+1,vi,m,n);
           
        vi[i][j]=0;   
    }
    
    bool isWordExist(vector<vector<char>>& board, string word) {
        
       int n=board.size(),m=board[0].size();
       vector<vector<int>> vi(n,vector<int>(m,0));
       int f=0;
       
       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
               if(f)
               return 1;
               
               solve(board,word,i,j,f,0,vi,m,n);
           }
       }
       
        return f;
    }
};
