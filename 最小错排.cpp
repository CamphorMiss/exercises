#include<iostream>
#include<vector>
//#include<algorithm>
using namespace std;
int main()
{
    int T=0;
    int n=0,result=0,minv=101;
    //while(cin>>T){
        cin>>T;
        while(T--)//T组测试数据
        {
            n=0,result=0,minv=101;
            cin>>n;
            if(n>1&&n<=20){
            vector<int>arr(n,0);
            vector<int>v(n,0);
            for(int j=0;j<n;j++)
                cin>>arr[j];//A排列
            for(int i=0;i<n;i++){
                cin>>v[i];//对应权重
                result+=v[i];
                if(v[i]<minv)
                  minv=v[i];
            }
            if(n%2==1){//个数为偶，则相邻亮亮交换，否则，在此基础上，权重最小的位置移动2
                //sort(v.begin(),v.end());//复杂度有点高
                result+=minv;
            }
               cout<<result<<endl;
            }
        }
   // }
    return 0;
}
