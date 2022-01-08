vector <int> max_of_subarrays(int *a, int n, int k)
    {
        vector<int>v;
       deque<int>q(k);
       int i;
       for(i=0;i<k;i++){
           while(!q.empty() && a[i]>=a[q.back()])q.pop_back();
           q.push_back(i);
       }
       for(;i<n;i++){
           v.push_back(a[q.front()]);
           while(!q.empty() && q.front()<=(i-k))q.pop_front();
           while(!q.empty() && a[i]>a[q.back()])q.pop_back();
           q.push_back(i);
       }
       v.push_back(a[q.front()]);
       return v; 
    }
