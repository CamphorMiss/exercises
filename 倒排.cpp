#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string str;
    while(getline(cin,str))
    {
        vector<string>v;
        string temp;
        str+=' ';
        for(int i=0;i<str.size();i++)
        {
            if(str[i]!=' '&&isalpha(str[i]))     temp+=str[i];
            else{
                if(!temp.empty())
                    v.insert(v.begin(),temp);
                temp.clear();
            }
        }
        for(int i=0;i<v.size();i++)
            i+1!=v.size()?cout<<v[i]<<' ':cout<<v[i]<<endl;
    }
    return 0;
}

