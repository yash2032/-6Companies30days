class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
    
        long long currProduct = 1, ans = 0, start = 0, end = 0;
        while(end < n) {
            currProduct *= a[end];
            while(currProduct >= k)
                currProduct /= a[start++];
            ans += end - start + 1;
            end++;
        }
        return ans;
        
    }
};
