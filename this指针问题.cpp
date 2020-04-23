#include<iostream>
using namespace std;

class A{
	public: 
	void fun()
	{
		cout<<&this<<endl;
	}
}; 
int main()
{
	A a;
	a.fun();
	return 0;
}
