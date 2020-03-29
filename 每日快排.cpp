#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;
/*int PartSort(int *arr,int left,int right)
{
	int key=right;
	while(left<right)
	{
		while(left<right&&arr[left]<=key)
		left++;
		while(left<right&&arr[right]>=key)
		right--;
		swap(arr[left],arr[right]);
	}
	swap(arr[left],arr[key]);
	return left;
}
void sort(int *arr,int left,int right)
{
if(left>=right) return;
  int mid=PartSort(arr,left,right);
sort(arr,left,mid-1);
sort(arr,mid+1,right);
return;
}
void QuickSortNotR(int* array,int left,int right)
{
//	assert(array);
	stack<int> s;
	s.push(left);
	s.push(right);//后入的right，所以要先拿right
	while(!s.empty())//栈不为空
	{
		int right = s.top();
		s.pop();
		int left = s.top();
		s.pop();
		
		int index = PartSort(array,left,right);
		if((index - 1) > left)//左子序列
		{
			s.push(left);
			s.push(index - 1);
		}
		if((index + 1) < right)//右子序列
		{
			s.push(index + 1);
			s.push(right);
		}
	}
}*/
void swap(int *a,int *b)
{
	int ret=*a;
	*a=*b;
	*b=ret;
}
void QuickSort(int * arr,int left,int right)//快速排序  去最后值为基准值，划分
{
	int size=right;
	int begin=left;
   int key=arr[size-1];
   if(left>=right) return;
	while(left<right)
	{
		while(begin<size)
		{
	  	 while(arr[begin]<key)
			 ++begin;
	     while(arr[size-1]>key)
			 --size;
			
		swap(&arr[left],&arr[right-1]);
		}
	swap(&arr[left],&arr[size-1]);
    QuickSort(arr,left,begin);
	QuickSort(arr,begin+1,right);
	}
}
int main()
{
	//快排的实现   
	int arr[10]={3,2,6,7,1,9,0,4,8,5}; 
    QuickSort(arr,0,9);
    for(int i=0;i<10;i++) cout<<arr[i]<<" ";
    cout<<endl;
	return 0;
}
