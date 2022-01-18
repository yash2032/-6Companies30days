// https://practice.geeksforgeeks.org/problems/amend-the-sentence3235/1#

string amendSentence (string s)
    {
        string ans;
        ans+=tolower(s[0]);
        
        int n=s.length();
        
        for(int i=1;i<n;i++){
            if(s[i]>='A' and s[i]<='Z'){
                ans+=" ";
                ans+=tolower(s[i]);
            }
            else
            ans+=s[i];
        }
        
        return ans;
    }
