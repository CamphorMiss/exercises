#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n=0;
    while(cin>>n)
        {
            vector<int>v1(n);//1
            vector<int>v2(n);//0
            int ret=0;
            for(int i=0;i<n;i++)
                {
                    cin>>ret;
                    if(ret==2)
                        {
                            v1[i]=1;
                            v2[i]=0;
                        }
                    else  
                    {
                        v1[i]=ret;
                        v2[i]=ret;
                    }
                }
            int count1=0,count2=0,money1=0,money2=0;
            for(int i=0;i<n;i++)
                {
                    if(v1[i]==1){count1++;money1+=count1;}
                    else if(v1[i]==0){ count1=0;}
                    if(v2[i]==1){count2++;money2+=count2;}
                    else if(v2[i]==0){ count2=0;}
                }
            cout<<(money1+money2)/2<<endl;
        }
    return 0;
}
