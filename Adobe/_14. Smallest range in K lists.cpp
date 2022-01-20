// https://practice.geeksforgeeks.org/problems/find-smallest-range-containing-elements-from-k-lists/1/#

class Solution{
   
   struct element{
     int val;
     int k;
     int pos;
   }; 
    
   public:
   static bool sort_t(element a,element b)
   {
       return a.val>b.val;
   }
   pair<int,int> findSmallestRange(int KSortedArray[][N], int n, int k)
   {
       pair<int,int> ans,temp;
       vector<element> vec_element;
       int max_range=-1;
       for(int i=0;i<k;i++)
       {
           element e;
           e.val=KSortedArray[i][0];
           e.k=i;
           e.pos=0;
           max_range=max(max_range,e.val);
           vec_element.push_back(e);
       }
       make_heap(vec_element.begin(),vec_element.end(),sort_t);
       ans.first=vec_element.front().val;
       ans.second=max_range;
       while(1)
       {
           int pos=vec_element.front().pos+1;
           if(pos==n)
               break;
           else
           {
               int k=vec_element.front().k;
               pop_heap(vec_element.begin(),vec_element.end(),sort_t);
               vec_element.pop_back();
               element e;
               max_range=max(max_range,KSortedArray[k][pos]);
               e.val=KSortedArray[k][pos];
               e.pos=pos;
               e.k=k;
               vec_element.push_back(e);
               push_heap(vec_element.begin(),vec_element.end(),sort_t);
               temp.first=vec_element.front().val;
               temp.second=max_range;
               if(temp.second-temp.first<ans.second-ans.first)
               {
                   ans=temp;
               }
           }
       }
       return ans;
   }
};
