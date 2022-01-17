// https://practice.geeksforgeeks.org/problems/implement-atoi/1/#

int atoi(string str) {
       
       int ans=0,f=0;
       
       for(int i=0;i<str.length();i++){
           
           int x=str[i]-'0';
           
           if(str[i]=='-') {f=1; continue;};
           
           if(x<0 || x>9)
           return -1;
          
           ans+=x;
           ans*=10;
       }
       
       ans/=10;
       if(f) return -1*ans;
       
       return ans;
       
    }
