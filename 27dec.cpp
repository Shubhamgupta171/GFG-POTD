//Anti Diagonal Traversal of Matrix(medium)

 // antidiagonal means if N=2 given then there antidiagonal matrix elements of [1 2]   is  1 2 3 4.
 //                                                                            [3 4]      

class Solution {
  public:
    vector<int> antiDiagonalPattern(vector<vector<int>> matrix)         
    {
       int m=matrix.size();
       int n=matrix.size();
       vector<vector<int>>diag(m+n);
       for(int i=0;i<m;i++){
           for(int j=0;j<n;j++){
               diag[i+j].push_back(matrix[i][j]);
           }
       }
       vector<int>ans;
       for(int i=0;i<m+n;i++){
           for(auto j:diag[i])
           ans.push_back(j);
           }
        return ans;
    }
};
