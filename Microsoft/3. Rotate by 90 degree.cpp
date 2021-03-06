// https://practice.geeksforgeeks.org/problems/rotate-by-90-degree0356/1/#

/*Simple 2 step solution

Step 1: Transpose the matrix

Step 2: Swap the 1st row with the last row, then second row with second last row until you reach the middle row.

*/

// --------------------*Code*---------------------------

void rotate(vector<vector<int> >& matrix)
{
   // Your code goes here
   int n=matrix.size();
   for(int i=0;i<n;i++){
       for(int j=i;j<n;j++){
           swap(matrix[i][j],matrix[j][i]);
       }
   }
   int i=0,j=n-1;
   while(i<j){
       swap(matrix[i],matrix[j]);
       i++;
       j--;
   }
}

