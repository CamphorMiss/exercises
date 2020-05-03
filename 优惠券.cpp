#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> disc(n);
    vector<int> prices(m);
    for(int i=0;i<n;++i)
        cin>>disc[i];
    for(int i=0;i<m;++i)
        cin>>prices[i];
    sort(disc.begin(),disc.end());
    sort(prices.begin(),prices.end());
    long long ans = 0;
    int i=0;
    for(int j=0;j<m;++j)
    {
        while(i<n && disc[i]<=prices[j])
            i += 1;
        ans += prices[j];
        if(i==0&&disc[i]<=prices[j])
            ans -= disc[i];
        else if(i>0)
            ans -= disc[i-1];
    }
    cout<<ans<<endl;
}
