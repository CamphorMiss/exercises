//右边的数大于等于左边的数
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,count=0;
    bool fl=true;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]){
            //if(b[i]>=b[i+1])
            count++;
            /*else
               fl=false;*/
        }
    }
    if(fl)
        cout<<count<<endl;
    else
        cout<<-1<<endl;
    return 0;
}
