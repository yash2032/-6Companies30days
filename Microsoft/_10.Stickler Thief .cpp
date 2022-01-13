// https://practice.geeksforgeeks.org/problems/stickler-theif-1587115621/1/#

class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        int dp[n+2];
        dp[0]=0;
        dp[1]=0;
        
        for(int i=0;i<n;i++){
            dp[i+2]=max(arr[i]+dp[i],dp[i+1]);
        }
        
        return dp[n+1];
    }
};

