#include<iostream>
#include<vector>
#include<string>
using namespace std; 
double findMedianSortedArrays(vector<int>& num1, vector<int>& num2) {
        int i=0,j=0;
        vector<int>v(num1.size()+num2.size());
     while(i<num1.size()||j<num2.size())
     {
        if((i<num1.size()&&j>=num2.size())||num1[i]<num2[j])
        {
            v.push_back(num1[i]);
            i++;
        }
        else
        {
            v.push_back(num2[j]);
            j++;
        }
     }//while
     return  0;
     //(v.size()%2==0)?(double)(v[v.size()/2]+v[v.size()-1])/2:v[v.size()/2];
}
int main()
{
//	vector<int>arr1{1,3};
//	vector<int>arr2{2,4};
	//cout<<findMedianSortedArrays(arr1,arr2)<<endl;
	string s="abc"+'d';
	cout<<"abc"+'d'<<endl;
	cout<<s;
	return 0;
}

