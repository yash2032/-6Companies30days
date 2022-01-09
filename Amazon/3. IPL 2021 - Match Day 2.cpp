vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        deque<int> q;
        vector<int> ans;
        
        for(int i=0;i<k;i++){
            while(!q.empty() and arr[i]>=arr[q.back()])
            q.pop_back();
            
            q.push_back(i);
        }
        
        for(int i=k;i<n;i++){
            ans.push_back(arr[q.front()]);
            
            while(!q.empty() and q.front()<=(i-k))
            q.pop_front();
            
            while(!q.empty() and arr[i]>=arr[q.back()])
            q.pop_back();
            
            q.push_back(i);
        }
        
        ans.push_back(arr[q.front()]);
        
        return ans;
    }
