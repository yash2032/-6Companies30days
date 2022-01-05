int longestMountain(vector<int>& arr) {
        int size = arr.size();
        int *prefix = new int[size+1]();
        
        int *suffix = new int[size+1]();
      
        
        prefix[0] = 0;
        for(int i = 1 ; i < size ; i ++) {
        
            
            if(arr[i] > arr[i - 1]) {
                prefix[i] = prefix[i-1] + 1;
            }
            else {
                prefix[i] = 0;
            }
        }
        
        suffix[size-1] = 0;
       for(int i = size -1  ; i > 0 ; i--) {
       
           if(arr[i-1] > arr[i]) {
               suffix[i - 1] = suffix[i] + 1;
           }
           else {
               suffix[i-1] = 0;
           }
      }
    
      int ans = 0;
      for(int i = 0 ; i < size ; i ++) {
         if(prefix[i] > 0 && suffix[i] > 0)
             ans = max(prefix[i]+ suffix[i] + 1,  ans); 
       }
       
       return (ans < 3 ? 0 : ans);
        
    }
