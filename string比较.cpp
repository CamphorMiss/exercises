#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str("abc");
	string str1("abc");
	if(str==str1)
	cout<<"=="<<endl;
	else 
	cout<<"!="<<endl;
	cout<<&str<<"   "<<&str1<<endl;
   return 0;
}
