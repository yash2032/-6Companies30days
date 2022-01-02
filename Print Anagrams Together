class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        
        map<string,int> mp;
        vector<vector<string> > v;
        int k=0;
        
       for(auto s: string_list){
           string tmp=s;
           sort(s.begin(),s.end());
           if(mp.find(s)!=mp.end()){
               v[mp[s]].push_back(tmp);
           }
           else{
               mp[s]=k;
               k++;
               vector<string> str;
               str.push_back(tmp);
               v.push_back(str);
           }
       }
       return v;
        
        
    }
};
