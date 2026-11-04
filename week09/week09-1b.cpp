//week09-1b.cpp ¾Ç²ß­pµe matrix 2
//leetcode 1572. Matrix Diagonal Sum
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int N=mat.size();
        int ans=0;
        for(int i=0;i<N;i++){
            for (int j=0;j<N;j++){
                if(i==j ||i+j==N-1) ans+=mat[i][j];
            }
        }

        return ans;
    }
};
