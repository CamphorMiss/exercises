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
        while(T--)//T���������
        {
            n=0,result=0,minv=101;
            cin>>n;
            if(n>1&&n<=20){
            vector<int>arr(n,0);
            vector<int>v(n,0);
            for(int j=0;j<n;j++)
                cin>>arr[j];//A����
            for(int i=0;i<n;i++){
                cin>>v[i];//��ӦȨ��
                result+=v[i];
                if(v[i]<minv)
                  minv=v[i];
            }
            if(n%2==1){//����Ϊż�����������������������ڴ˻����ϣ�Ȩ����С��λ���ƶ�2
                //sort(v.begin(),v.end());//���Ӷ��е��
                result+=minv;
            }
               cout<<result<<endl;
            }
        }
   // }
    return 0;
}
