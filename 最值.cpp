int findMaxGap(vector<int> A, int n) {
        // write code here
        int max_num=A[0],min_num=A[0];
        for(int i=0;i<n;i++)
        {
            max_num=max_num>A[i]?max_num:A[i];
            min_num=min_num<A[i]?min_num:A[i];
        }
        if(max_num==A[n-1])return max_num-A[0];
        return max_num>A[n-1]?(max_num-A[n-1]):(A[n-1]-max_num);
    }
