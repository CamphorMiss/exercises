#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int a=0,n=0;
    while(cin>>a>>n)
    {
        vector<int> arr(n);
        int money=0,ect=a;
        for(int j=0;j<n;j++)
            cin>>arr[j];
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++)
        {
            if(ect>=arr[i])//���߿��Դ���������
                money++;
            else if(ect<arr[i]&&arr[i]-ect<=money&&money!=0)
                ect++;
            else
                break;
        }
        cout<<money<<endl;
    }
    return 0;
}
