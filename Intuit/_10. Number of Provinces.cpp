// https://leetcode.com/problems/number-of-provinces/submissions/

class Solution {
public:
    
    void dfs(vector<int> adj[],int x,vector<int> &vi){
        
        if(vi[x]==1) return;
        vi[x]=1;
        
        for(auto f: adj[x]){
            dfs(adj,f,vi);
        }
        
        
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        int n=isConnected.size();
        
        vector<int> adj[n];
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j) continue;
                
                if(isConnected[i][j]==1) adj[i].push_back(j);
            }
        }
        
        vector<int> vi(n,0);
        int co=0;
        
        for(int i=0;i<n;i++){
            if(vi[i]==0){
                co++;
                dfs(adj,i,vi);
            }
        }
        
        return co;
        
    }
};
