// https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1/#

vector<int> spirallyTraverse(vector<vector<int> > arr, int r, int c) 
    {
        vector<int> v;
   
       int rowStart = 0;
       int rowEnd = arr.size()-1;
       int colStart = 0;
       int colEnd = arr[0].size()-1;

        while(rowStart <=rowEnd && colStart<=colEnd)
       {

       for(int i=colStart; i<=colEnd ; i++)
       {
             if(rowStart >rowEnd  || colStart>colEnd)
              break;
              v.push_back(arr[rowStart][i]);
       }
      rowStart++;

       for(int i=rowStart; i<=rowEnd; i++)
        {
             if(rowStart >rowEnd  || colStart>colEnd)
              break;
               v.push_back(arr[i][colEnd]);
       }
        colEnd--;

       for(int i = colEnd; i>=colStart; i--)
        {
             if(rowStart >rowEnd  || colStart>colEnd)
              break;
               v.push_back(arr[rowEnd][i]);
       }
        rowEnd--;

       for(int i = rowEnd; i>=rowStart; i--)
        {
             if(rowStart >rowEnd  || colStart>colEnd)
              break;
              v.push_back(arr[i][colStart]);
       }
       colStart++;
       
       }
       return v;
    }
