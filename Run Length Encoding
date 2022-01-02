string encode(string src)
{     
   string ans;
   
   char prev=src[0];
   int co=1;
   
   for(int i=1;i<src.length();i++){
       
       if(prev==src[i]){
       co++;
       continue;}
       
       ans+=prev+to_string(co);
       co=1;
       prev=src[i];
       
       
   }
   ans+=prev+to_string(co);
   return ans;
}     
