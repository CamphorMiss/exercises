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
        for(int i=1;i<=str.size();i++)//一共有count种排列
            count*=i;
        cout<<"[";
        do{
                cout<<str;
               --count?cout<<", ":cout<<"]"<<endl;//最后一种排列后面直接输出]
        }while(next_permutation(str.begin(),str.end()));//库里提供的排列函数
    }
    return 0;
}
