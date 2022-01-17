// https://practice.geeksforgeeks.org/problems/winner-of-an-election-where-votes-are-represented-as-candidate-names-1587115621/1/# 

vector<string> winner(string arr[],int n)
    {
        map<string,int> mp;
        string ans;
        ans=arr[0];
        mp[ans]++;
        
        for(int i=1;i<n;i++){
        mp[arr[i]]++;
        ans=ans<arr[i]?ans:arr[i];
        }
        
        
        
        int mx=-1;
        
        for(auto x: mp){
            if(mx<=x.second){
               
                
                if(mx==x.second){
                    ans=ans<x.first?ans:x.first;
                }
                else{
                    ans=x.first;
                }
                
                mx=x.second;
            }
        }
        
        return {ans,to_string(mx)};
    }
