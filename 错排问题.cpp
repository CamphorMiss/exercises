#include<iostream>
using namespace std;
int main()
{
        int n=0;
        long arr[20]={0,1};
        for(int i=2;i<20;i++)//´íÅÅÎÊÌâ
            arr[i]=i*(arr[i-1]+arr[i-2]);
        while(cin>>n)
    {
         cout<<arr[n-1]<<endl;
    }
    return 0;
}
