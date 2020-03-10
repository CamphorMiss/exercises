#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
int main()
{
    int n, m, k;
    float dp[21][21]={1};
    bool bb[21][21];
    while(cin >> n >> m >>k)
    {
        for(int i = 0; i < 21; i++)
        for(int j = 0; j < 21; j++)
        {
            dp[i][j] = 0;
            bb[i][j] = false;
        }
        int x, y;
        for(int i = 0; i< k; i++)
        {
            cin >> x >> y;
            bb[x-1][y-1] = true;
        }
        dp[0][0] = 1;
        for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
        {
            if(i == 0 && j == 0)    continue;
            if (bb[i][j])
            {
                dp[i][j] = 0;
            }
            else
            {
                dp[i][j] = (i == (n-1)?1:0.5) * dp[i][j-1] + (j == (m-1)?1:0.5) * dp[i-1][j];
            }
        }
        printf("%.2f\n", dp[n-1][m-1]);
    }
    return 0;
}

