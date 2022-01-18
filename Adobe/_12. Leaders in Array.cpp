// https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1/

vector<int> leaders(int a[], int n){
        
        vector<int> v;
        v.push_back(a[n-1]);
        
        int prev=a[n-1];
        
        for(int i=n-2;i>=0;i--){
            if(prev<=a[i]){
                v.push_back(a[i]);
                prev=a[i];
            }
        }
        
        reverse(v.begin(),v.end());
        
        return v;
        
    }
