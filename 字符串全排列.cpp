#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string str1;
    while(cin>>str1)
    {
        sort(str1.begin(),str1.end());
        string str=str1;
        int count=1;
        for(int i=1;i<=str.size();i++)//һ����count������
            count*=i;
        cout<<"[";
        do{
                cout<<str;
               --count?cout<<", ":cout<<"]"<<endl;//���һ�����к���ֱ�����]
        }while(next_permutation(str.begin(),str.end()));//�����ṩ�����к���
    }
    return 0;
}
