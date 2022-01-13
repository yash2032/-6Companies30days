// https://practice.geeksforgeeks.org/problems/length-of-largest-region-of-1s-1587115620/1/#


class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    void dfs(vector<vector<int>> & grid, int row, int col, int &max_area, int &curr_max){ 
        
        if(row < 0 || col < 0 || row >= grid.size() || col >= grid[0].size() || grid[row][col] != 1)
            return; 
        
        grid[row][col] = 2; 
        curr_max++; 
        if(curr_max > max_area) {
            max_area = curr_max; 
        }
        dfs(grid,row,col-1,max_area,curr_max); 
        dfs(grid,row,col+1,max_area,curr_max); 
        dfs(grid,row-1,col,max_area,curr_max); 
        dfs(grid,row+1,col,max_area,curr_max); 
        
        dfs(grid,row-1,col-1,max_area,curr_max); 
        dfs(grid,row+1,col+1,max_area,curr_max); 
        dfs(grid,row-1,col+1,max_area,curr_max); 
        dfs(grid,row+1,col-1,max_area,curr_max); 
        
    }    
    
    int findMaxArea(vector<vector<int>>& grid) {
        int max_area = 0; 
        for(int i = 0; i < grid.size(); ++i){
            for(int j = 0; j < grid[i].size(); ++j){
                int curr_max = 0; 
                dfs(grid, i, j, max_area, curr_max); 
            }
        }
        return max_area; 
    }
  
}
