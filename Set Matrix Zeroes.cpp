class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m[matrix.size()][matrix[0].size()];
        for(int i=0;i<matrix.size();i++)
            for(int j=0;j<matrix[0].size();j++)
                m[i][j]=matrix[i][j];
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
                if(matrix[i][j]==0)
                {
                    for(int k=0;k<matrix[0].size();k++)
                        m[i][k]=0;
                    for(int l=0;l<matrix.size();l++)
                        m[l][j]=0;
                }
        }
        for(int i=0;i<matrix.size();i++)
            for(int j=0;j<matrix[0].size();j++)
                matrix[i][j]=m[i][j];
    }
};
