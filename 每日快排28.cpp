#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int qsort(vector<int>&arr,int left,int right)
{
	int &key=arr[right-1];
	--right;
	while(left<right)
	{
	while(left<right&&arr[left]<=key)
	left++;
	while(left<right&&arr[right]>=key)
	right--;
	swap(arr[left],arr[right]);
	}
	swap(arr[left],key);
	return left;
}
void Qsort(vector<int>&arr,int left,int right) 
{
	 if(left<right-1)
	 {
	 	int mid=qsort(arr,left,right);
	 	Qsort(arr,left,mid);
	 	Qsort(arr,mid+1,right);
	 }
}
int main()
{
 vector<int> arr={6,1,2,5,4,9,0,8,7,3};
 Qsort(arr,0,arr.size());//øÏ≈≈ 
 for(auto a:arr) cout<<a<<" ";
 cout<<endl;
 return 0;
}
