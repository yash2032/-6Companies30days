// https://practice.geeksforgeeks.org/problems/stock-span-problem-1587115621/1#

vector <int> calculateSpan(int price[], int n)
    {
       vector<int> pg(n);
       
       pg[0]=1;
       stack<int> st;
       
       st.push(0);
       
       for(int i=1;i<n;i++){
           
         
           while(!st.empty() and price[st.top()]<=price[i]){
                   st.pop();
           }
           
           if(st.empty())
           pg[i]=i+1;
           
           else{
               pg[i]=i-st.top();
           }
           
           st.push(i);
           
           
       }
       
       return pg;
    }
