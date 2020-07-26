#include<iostream>
#include<string.h>
using namespace std;
class Tdata
{
    public:
    Tdata(int a=0,int b=0,int c=0)
    {
        year=a;
        month=b;
        date=c;
        cout<<year<<"/"<<month<<"/"<<date<<endl;
    }
    private: 
    int year;
    int month;
    int date;
};
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    Tdata t(a,b,c);
    return 0;
}
