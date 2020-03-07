// write your code here cpp
#include<iostream>
using namespace std;
int main()
{
    int n=0;
    long arr[91]={1,1};
    for(int i=2;i<91;i++)
        arr[i]=arr[i-1]+arr[i-2];
    while(cin>>n){
        cout<<arr[n]<<endl;
    }
    return 0;
}
