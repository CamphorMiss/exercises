#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 
int Parition(vector<int>& arr, int left, int right)
{
	int &key = arr[right - 1];
	int begin = left, end = right - 1;
	while (begin < end)
	{
		while (begin < end && arr[begin] <= key)
			begin++;
		while (begin < end && arr[end]>key)
			end--;
		if (begin != end)
			swap(arr[begin], arr[end]);
	}
	if (begin != right - 1)
		swap(arr[begin],arr[right-1]);
	return begin;
}
void QSort(vector<int>& arr, int left, int right)
{
	if (left < right-1)
	{
		int mid = Parition(arr, left, right);
		QSort(arr, left, mid);
		QSort(arr, mid + 1, right);
	}
}

int main()
{
	vector<int> arr{ 2, 5, 8, 4, 6, 1, 3, 7, 9,0,0};
	QSort(arr, 0, arr.size());
	for (const auto c : arr)
		std::cout << c << " ";
	std::cout << std::endl;
	system("pause");
	return 0;
}

