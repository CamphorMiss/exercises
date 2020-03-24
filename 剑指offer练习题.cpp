vector<int> clockwisePrint(vector<vector<int> > mat, int n, int m) {
        // write code here
        vector<int> v;
        int up=0,down=n-1,left=0,right=m-1;
        while(up<=down&&left<=right){
        for(int i=left;i<=right;i++)//-
            v.push_back(mat[up][i]);
        for(int i=up+1;i<=down;i++)//|
            v.push_back(mat[i][right]);
        for(int i=right-1;up<down&&i>=left;i--)
            v.push_back(mat[down][i]);
        for(int i=down-1;left<right&&i>up;i--)
            v.push_back(mat[i][left]);
            up++;
            left++;
            down--;
            right--;
        }
        return v;
    }
