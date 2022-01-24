// https://leetcode.com/problems/minimum-swaps-to-arrange-a-binary-grid/submissions/

class Solution {
public:
   int minSwaps(vector<vector<int>>& grid) {
    int n = grid.size();
    if(n == 0){
        return 0;
    }
    //store the continous zeros in right side of each row
    vector<int> zeros(n, 0);
    int ans = 0;
    
    for(int i=0; i<n; i++){
        for(int j=n-1; j>=1; j--){
            if(grid[i][j] == 0){
			//if zeros is found the increment
                zeros[i]++;
            } 
			//else break
            else{
                break;
            }
        }
    }
    
    for(int i=0; i<n-1; i++){
	//the required number of zeros in the corresponding row
        int req = n-i-1;
        int k=i;
        while(k < n && min(req, zeros[k]) != req){
            k++;
        }
        //if we are unable to find such then return -1 (not possible)
        if(k == n){
            return -1;
        }
        //else add hte number of swaps in the answer
        ans += (k - i);
		//drag the required number of zeros to the current index by swapping it with its previous elements.
        while(k > i){
            swap(zeros[k], zeros[k-1]);
            k--;
        }
    }
    //retrun the number of swaps
    return ans;
}
       
};
